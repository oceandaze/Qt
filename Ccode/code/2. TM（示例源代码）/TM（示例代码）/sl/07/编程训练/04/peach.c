#include <stdio.h>
int main()
{
	int day,x1,x2;							/*定义day，x1，x2三个变量为基本整型*/
	day=9;
	x2=1;
	do
	{
		x1=(x2+1)*2;							/*第一天的桃子数是第二天桃子数加1后的2倍*/
		x2=x1;
		day--;								/*因为从后向前推天数递减*/
	}while(day>0);
	printf("一共有 %d个桃子\n",x1);			/*输出桃子的总数*/
	return 0;
}
