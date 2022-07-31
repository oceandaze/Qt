#include<stdio.h>
int main()
{
	int a[6] = { 1,0,0,1,0,0 };//定义数组存灯的状态

	int indexLast=1;//定义变量用于控制
	int *p ;//定义指针变量指向数组

	
	printf("0表示灯灭，1表示灯亮\n");
	
	for (indexLast = 5; indexLast >= 0; indexLast--) //遍历数组中的每个元素
	{
		if (a[indexLast] == 1) //如果遇到数组元素是1
		{
			break;//退出循环
		}
	}
	printf("倒数第一个亮着的灯泡是:倒数第%d个\n", indexLast);//输出第几个灯亮
	p = &a[indexLast];
	p--;//指针自减
	if (*p == 1)//如果指针数据等于1
	{
		printf("前一个灯泡亮着\n");//输出此时彩灯情况
	}
	else //如果指针数据不等于1
	{
		printf("前一个灯泡没亮\n"); //输出此时彩灯情况
	}
	return 0;//程序结束
}
