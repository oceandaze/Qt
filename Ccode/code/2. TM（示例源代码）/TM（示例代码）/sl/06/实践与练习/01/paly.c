/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   微信小程序 我该玩哪个？
*/
#include<stdio.h>
int main()
{
	int choose;                                                        //定义变量存储选择数字
	printf("1代表跳一跳，2代表好友画我，3代表头脑王者,请选择：\n");  //提示信息
	scanf("%d", &choose);                                         //输入选择的数字
	printf("您现在选择的是数值%d\n", choose);                         //输出选择的数字
	if (choose == 1)                                                   //如果选择数字1
	{
		printf("所以您要玩“跳一跳”游戏\n");                         //输出选择跳一跳游戏
	}
	else if (choose == 2)                                                //如果选择数字2
	{
		printf("所以您要玩“好友画我”游戏\n");                         //输出选择好友画我游戏
	}
	else if (choose == 3)                                             //如果选择数字3
	{
		printf("所以您要玩“头脑王者”游戏\n");                      //输出选择头脑王者游戏
	}
	else                                                                //选择的数字不是1、2、3
	{
		printf("所以您还是找个朋友聊天吧！\n");                               //输出找朋友聊天
	}
	return 0;                                                                 //程序结束
}
