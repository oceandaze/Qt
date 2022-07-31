#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define AREA(a,h) a*h/2
int main()
{
	int i, j;
	printf("请输入底和高：\n");
	scanf("%d %d",&i,&j);
	printf("面积是：%d\n", AREA(i, j));
	return 0;
}