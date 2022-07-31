/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   一棵松树的梦
*/
#include<stdio.h>
char pinetree[30] = "我是一棵松树";
void chistmastree();
int main()
{
	printf("\n下雪了……\n");
	printf("\n============开始做梦……==============\n");
	printf("\n");
	chistmastree();
	printf("\n============梦醒了……================\n");
	printf("\n");
	printf("我身上落满雪花,%s -_-\n",pinetree);
	printf("\n");
	return 0;
}
void chistmastree()
{
	char pinetree[50] = "挂上彩灯、礼物……我变成一棵圣诞树@^.^@\n";
	printf("%s",pinetree);
}