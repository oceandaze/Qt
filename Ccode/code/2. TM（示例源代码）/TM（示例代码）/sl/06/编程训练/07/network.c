#include<stdio.h>
int main()
{
	int day;                                    /*定义变量，day是天数，fee是所花费用*/
	double fee;
	puts("请输入天数：");
	scanf("%d", &day);                               /*输入天数*/
	fee = (day < 30) ? day : day * 0.75;                   /*利用条件运算*/
	printf("所花费用是：%.2f\n", fee);
	return 0;
}