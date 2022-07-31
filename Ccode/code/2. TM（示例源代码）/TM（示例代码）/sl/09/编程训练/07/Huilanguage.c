#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int palindrome();
int main()
{
	palindrome();
	return 0;
}
int palindrome()
{
	int a, temp, n = 0;
	printf("请输入一个数：\n");
	scanf("%d", &a);
	temp = a;
	while (a != 0)
	{
		n += a % 10;
		a /= 10;
		n *= 10;
	}
	if (temp == n / 10)
	{
		printf("是回文数\n");
		return 1;
	}
	else
	{
		printf("不是回文数\n");
		return 0;
	}
}