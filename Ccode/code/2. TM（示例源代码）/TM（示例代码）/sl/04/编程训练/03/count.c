#include<stdio.h>
int main()
{
	float pay1 = 56.75f, pay2 = 72.91f, pay3 = 88.50f, pay4 = 26.37f, pay5 = 68.51f;
	float money;
	int sum;
	money = pay1 + pay2 + pay3 + pay4 + pay5;
	printf("实际应付%.2f元\n",money);
	sum = (int)money;
	printf("抹零之后支付%d元\n",sum);
	return 0;
}