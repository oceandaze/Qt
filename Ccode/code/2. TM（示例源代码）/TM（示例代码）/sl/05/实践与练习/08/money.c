#include<stdio.h>
int main()
{
	float money;
	printf("请输入您的能量兑换红包的金额：\n");
	scanf("%f",&money);
	printf("  我的能量兑换了\n");
	printf("    ￥%.2f\n",money);
	printf("感谢曾经努力的自己\n");
	return 0;
}