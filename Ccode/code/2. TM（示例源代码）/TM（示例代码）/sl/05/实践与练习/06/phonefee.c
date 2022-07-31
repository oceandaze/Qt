#include<stdio.h>
int main()
{
	int present=8,invest,fee;
    printf("\n 话费余额为：%d 元\n",present);
	printf(" 请输入充值金额:");
	scanf("%d",&invest);
	fee=present+invest;
	printf(" 当前可用余额：%d 元\n",fee);

	return 0;
}