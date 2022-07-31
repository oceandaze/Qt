#include<stdio.h>
int main()
{
    double a=1000*10*8*0.001;	/*定义变量并计算压强*/
    double *p;	/*定义指针变量*/
	p=&a;	/*将地址赋值给指针变量*/
    printf("根据压强公式：\n");
	printf("水对杯子产生压强:%.1lf Pa\n",*&a); 					/*利用*&输出压强*/
    return 0;
}
	 
