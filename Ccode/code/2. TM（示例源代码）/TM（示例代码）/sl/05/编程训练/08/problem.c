#include<stdio.h>                               //头文件
int main()                                      //主函数
{
	int feet = 94, head = 35, Chicken, Rabbit;           //分别定义脚、头的数量，定义存储鸡、兔数量变量
	Chicken = (4 * head - feet) / 2;                                //计算鸡的数量
	Rabbit = (feet - 2 * head) / 2;                                 //计算兔的数量
	printf("笼中有%d只鸡，有%d只兔子!\n", Chicken, Rabbit);        //输出结果
	return 0;                                                         //程序结束
}
