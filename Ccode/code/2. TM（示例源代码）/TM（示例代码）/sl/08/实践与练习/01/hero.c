/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   输出“王者荣耀”的游戏角色
*/
#include<stdio.h>
int main()
{
	int i;
	char tank[100]= {"苏烈,刘邦,钟馗,张飞,牛魔,程咬金,白起,刘禅,庄周,项羽,廉颇,巨灵神,安禄山,猪八戒" };
	char warriors[200] = { "狂铁,裴擒虎,铠,孙悟空,哪吒,杨戬,橘右京,亚瑟,雅典娜,夏侯惇,关羽,吕布,韩信,老夫子,达摩,典韦,曹操,钟无艳,墨子,赵云,刑天,龙且" };
	char Assassins[100] = { "百里玄策,庞统,花木兰,阿轲（荆轲）,不知火舞,李白,娜可露露,兰陵王,露娜,韩信,宫本武藏,盖聂,红拂" };
	char Masters[200] = { "杨玉环,弈星,女娲,周瑜,鬼谷子,芈月,干将莫邪,东皇太一,大乔,诸葛亮,貂蝉,张良,安琪拉,不知火舞,姜子牙,武则天,王昭君,甄姬,扁鹊,高渐离,嬴政,妲己,小乔" };
	char Shooters[100] = { "公孙离,百里守约,后羿,刘备,黄忠,马可波罗,成吉思汗,虞姬,李元芳,艾琳,狄仁杰,鲁班七号,孙尚香"};
	char auxiliarys[100] = { "明世隐,梦奇,孙膑,太乙真人,蔡文姬"};
	printf("“王者荣耀”游戏角色:\n");
	printf("====坦克:====\n");
	for ( i = 0; i < 100; i++)
	{
		printf("%c", tank[i]);
	}
	printf("\n");
	printf("====战士:====\n");
	for (i = 0; i < 200; i++)
	{
		printf("%c", warriors[i]);
	}
	printf("\n");
	printf("====刺客:====\n");
	for (i = 0; i < 100; i++)
	{
		printf("%c", Assassins[i]);
	}
	printf("\n");
	printf("====法师:====\n");
	for (i = 0; i < 200; i++)
	{
		printf("%c", Masters[i]);
	}
	printf("\n");
	printf("====射手:====\n");
	for (i = 0; i < 100; i++)
	{
		printf("%c", Shooters[i]);
	}
	printf("\n");
	printf("====辅助:====\n");
	for (i = 0; i < 100; i++)
	{
		printf("%c", auxiliarys[i]);
	}
	printf("\n");
	return 0;
}