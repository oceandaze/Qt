#include<stdio.h>
int main()
{
	float pay1 = 56.75f, pay2 = 72.91f, pay3 = 88.50f, pay4 = 26.37f, pay5 = 68.51f;
	float money;
	int sum;
	money = pay1 + pay2 + pay3 + pay4 + pay5;
	printf("★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆\n");
	printf("☆        实际应付%.2f元       ★\n",money);
	printf("★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆\n");
	return 0;
}