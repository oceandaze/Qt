#include<stdio.h>
int main()
{

	int mark;
	printf("请你为《肖申克的救赎》这部电影打分（只能输入数字1~9）:\n");
    scanf("%d",&mark);
	printf("你为《肖申克的救赎》电影的评价为：此处有%d个*\n",mark);
	return 0;
}