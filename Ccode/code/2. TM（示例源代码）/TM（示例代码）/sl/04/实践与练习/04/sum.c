/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   支付宝年账单来了，请签收
*/
#include<stdio.h>
int main()
{
	int Jan = 3588, Feb = 3000, Mar = 3888, Apr = 2100,May=4565,Jun=2509;//定义变量表示1-6月份的花销
	int July = 4551, Aug = 4839, Sep = 3609, Oct = 4142, Nov = 4895, Dec = 4981;//定义变量表示7-12月份的花销
	int sum;//定义变量存储总花销
	sum = Jan + Feb + Mar + Apr + May + Jun + July + Aug + Sep + Oct + Nov + Dec;//计算一年花钱总数
	printf("---------------------------------------------------------------------------- \n");
	printf("|   1-6月分别在支付宝上花费%d元、%d元、%d元、%d元、%d元、%d元   |\n", Jan, Feb, Mar, Apr, May, Jun);//输出1-6月花销情况
	printf("|   7-12月分别在支付宝上花费%d元、%d元、%d元、%d元、%d元、%d元  |\n", July, Aug, Sep, Oct, Nov, Dec);//输出7-12月花销情况
	printf("----------------------------------------------------------------------------\n");
	printf("\n                ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ \n");
	printf("                ★  这一年在支付宝上总花费%d  ★\n", sum);//输出总花销情况
	printf("                ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ \n");
	return 0;//程序结束
}