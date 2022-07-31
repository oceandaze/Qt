#include<stdio.h>
void change();
int main()
{
	change();
	return 0;
}
void change()
{
	double USD, RMB;
	printf("您要兑换的美元金额：");
	scanf("%lf",&USD);
	RMB = USD * 6.28;
	printf("\n* * * * * * * * * * * * * * * * *\n");
	printf("*  兑换成人民币金额是：%.2lf  *\n",RMB);
	printf("* * * * * * * * * * * * * * * * *\n");


}