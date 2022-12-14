///////////////////////////////////
// 程序名称：防空车打飞机
// 编译环境：Visual C++ 6.0，EasyX 2014冬至版
// 作者：左慈 QQ：2382036672 邮箱：qwj2222@126.com
// 最后修改：2014-12-27
// 操作方式：左 左走 右 右走 空格 发射子弹
#include <graphics.h>
#include <vector>
#include <ctime>
#include <cmath>
#pragma comment (lib,"MSIMG32.lib")
#define KEY_DOWN(vk_c) (GetAsyncKeyState(vk_c)&0x8000?1:0)
using namespace std;
#pragma comment (lib,"winmm.lib")
// IMAGE
IMAGE buffer(500,400),background,player,missile,planes[3],planebomb;

// 玩家x坐标，玩家y坐标，装弹剩余时间，生命值，得分
int playerx=0,playery=333,firereload=5,strength=50,score=0;

// 玩家防空导弹
struct PLAYERMISL
{
    int x;
    int y;
};

// 飞机类型
struct BOMBPLANE
{
    int speed;  // 飞机速度
    int width;  // 飞机宽度
    int height; // 飞机高度
} bombplane[3]= {{15,85,22},{12,81,22},{8,105,50}};

// 炸弹
struct BOMB
{
    int x;
    int y;
};

// 飞机
struct PLANE
{
    int x;
    int y;
    int type;
    int reload;// 还有多少帧重新扔炸弹
};

vector<PLAYERMISL> misl;
vector<PLANE> plane;
vector<BOMB> bomb;


// 封装好的透明贴图函数
void putpicture(int x,int y,IMAGE img)
{
    HDC dstDC = GetImageHDC(&buffer);
    HDC srcDC = GetImageHDC(&img);
    TransparentBlt(dstDC, x, y, img.getwidth(), img.getheight(), srcDC, 0, 0, img.getwidth(), img.getheight(), RGB(40,112,162));
}


// 精确延时
void sleep(int ms)
{
    static clock_t oldclock = clock();      // 静态变量，记录上一次 tick
    oldclock += ms * CLOCKS_PER_SEC / 1000; // 更新 tick
    if (clock() > oldclock)                 // 如果已经超时，无需延时
    {
        oldclock = clock();
    }
    else
        while(clock() < oldclock)           // 延时
        {
            Sleep(1);    // 释放 CPU 控制权，降低 CPU 占用率
        }
}


// 矩形碰撞检测函数
bool collision(int x1,int y1,int w1,int h1,int x2,int y2,int w2,int h2)
{
    if((abs((x1 + w1 / 2) - (x2 + w2/2)) < (w1 + w2) / 2)&&abs((y1 + h1 / 2) - (y2 + h2/2) )< (h1 + h2) / 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}


// 创建一颗防空导弹
void createmisl()
{
    PLAYERMISL playermisl;
    playermisl.x=playerx+12;
    playermisl.y=playery-4;
    misl.push_back(playermisl);
}


// 创建一颗炸弹
void createbomb(PLANE p)
{
    BOMB b;
    b.x=p.x+bombplane[p.type].width/2-4;
    b.y=p.y+bombplane[p.type].height+2;
    bomb.push_back(b);
}


// 创建一架飞机
void createplane()
{
    PLANE newplane;
    newplane.x=500;
    newplane.y=rand()%181+20;
    newplane.type=rand()%3;
    newplane.reload=10;            // 炸弹发射间隔时间为10帧
    plane.push_back(newplane);
}


// 加载图片资源
void loadres()
{
    loadimage(&background,"IMAGE","BG");
    loadimage(&player,"IMAGE","PLAYER");
    loadimage(&planebomb,"IMAGE","BOMB");
    loadimage(&missile,"IMAGE","MISL");
    char filename[10];
    for(int i=0; i<3; i++)
    {
        sprintf(filename,"PLANE%d",i);
        loadimage(&planes[i],"IMAGE",filename);
    }
}


// 每帧绘图
void render()
{
    char info[25];
    SetWorkingImage(&buffer);                           // 先在缓冲区绘图
    putimage(0,0,&background);
    putpicture(playerx,playery,player);                 // 显示防空车
    vector<PLAYERMISL>::iterator it1;
    vector<PLANE>::iterator it2;
    vector<BOMB>::iterator it3;
    for(it1=misl.begin(); it1!=misl.end(); it1++)
    {
        putpicture(it1->x,it1->y,missile);    // 显示防空导弹
    }
    for(it2=plane.begin(); it2!=plane.end(); it2++)
    {
        putpicture(it2->x,it2->y,planes[it2->type]);    // 显示飞机
    }
    for(it3=bomb.begin(); it3!=bomb.end(); it3++)
    {
        putpicture(it3->x,it3->y,planebomb);    // 显示炸弹
    }
    SetWindowText(GetHWnd(), "防空大战");	               //设置窗口标题文字，GetHWnd()获取窗口句柄
	setbkcolor(YELLOW);						           //字体背景设置透明
	settextstyle(20, 0, _T("黑体"));			           //字体样式，高度20，黑体
	settextcolor(RGB(255, 51, 68));
	sprintf(info,"生命值：%d 得分：%d",strength,score);
    outtextxy(160,0,info);                                // 显示游戏数据
    SetWorkingImage();
    putimage(0,0,&buffer);                              // 把缓冲区绘图内容一次性绘制上去，这样能消除闪烁
}


int startGame()
{
    
    mciSendString("play bj.mp3 repeat", NULL, 0, NULL);//播放背景音乐
	srand(time(NULL));
    loadres();
    initgraph(500,400);
    setbkmode(TRANSPARENT);
    vector<PLAYERMISL>::iterator it1;
    vector<PLANE>::iterator it2;
    vector<BOMB>::iterator it3;

gamestart:
    bool eraseyes=false;
    while(true)
    {
        if(strength<1)
        {
            break;
        }
        if(plane.size()<3)
        {
            createplane();
        }
        for(it1=misl.begin(); it1!=misl.end();)
        {
            it1->y-=10;
            if(it1->y<0)
            {
                it1=misl.erase(it1);
            }
            else
            {
                ++it1;
            }
        }
        for(it2=plane.begin(); it2!=plane.end();)
        {
            it2->x-=bombplane[it2->type].speed;
            if(it2->x+bombplane[it2->type].width<0)
            {
                plane.erase(it2);
            }
            else
            {
                if(it2->reload==0)
                {
                    it2->reload=10;
                    createbomb(*it2);
                }
                else
                {
                    it2->reload-=1;
                }
                ++it2;
            }
        }
        for(it2=plane.begin(); it2!=plane.end();)
        {
            for(it1=misl.begin(); it1!=misl.end();)
            {
                if(collision(it1->x,it1->y,5,7,it2->x,it2->y,bombplane[it2->type].width,bombplane[it2->type].height))
                {
					mciSendString("play ss.mp3", NULL, 0, NULL); //播放玩家打中飞机音乐
                    misl.erase(it1);
                    plane.erase(it2);
                    eraseyes=true;
                    score+=1;
                }
                else
                {
					mciSendString("close ss.mp3", NULL, 0, NULL);//关闭打中飞机音乐
                    ++it1;
                }
            }
            if(eraseyes==false)
            {
                it2++;
            }
            else
            {
                eraseyes=false;
            }
        }
        for(it3=bomb.begin(); it3!=bomb.end();)
        {
            it3->y+=5;
            if(it3->y>400)
            {
                it3=bomb.erase(it3);
            }
            else
            {
                ++it3;
            }
        }
        for(it3=bomb.begin(); it3!=bomb.end();)
        {
            if(collision(it3->x,it3->y,5,7,playerx,playery,58,49))
            {
                bomb.erase(it3);
                strength-=1;
            }
            else
            {
                ++it3;
            }
        }
        if(KEY_DOWN(VK_LEFT)&&playerx>=10)
        {
            playerx-=10;
        }
        if(KEY_DOWN(VK_RIGHT)&&playerx<=384)
        {
            playerx+=10;
        }
        if(KEY_DOWN(VK_SPACE)&&firereload==0)
        {
            createmisl();
            firereload=5;
        }
        if(firereload>=1)
        {
            firereload-=1;
        }
        render();
        sleep(33);
    }

    char result[50];
    sprintf(result,"本次得分：%d分，请再接再厉。是否重新开始游戏？",score);
    if(MessageBox(GetHWnd(),result,"游戏结束",MB_YESNO)==IDYES)
    {
        playerx=0;
        playery=286;
        strength=50;
        score=0;
        firereload=5;
        misl.clear();
        plane.clear();
        bomb.clear();
        goto gamestart;
    }

    return 0;
}
int main()
{
	
	startGame();    //调用开始游戏函数
	return 0;
	
}
