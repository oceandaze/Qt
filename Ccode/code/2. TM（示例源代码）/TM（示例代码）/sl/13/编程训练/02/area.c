#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define AREA(a,h) a*h/2
int main()
{
	int i, j;
	printf("������׺͸ߣ�\n");
	scanf("%d %d",&i,&j);
	printf("����ǣ�%d\n", AREA(i, j));
	return 0;
}