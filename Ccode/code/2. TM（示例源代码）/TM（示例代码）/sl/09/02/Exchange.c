#include<stdio.h>

void exchange(int a,int b);	/*声明函数*/
int main()
{
    int a=3,b=4;/*定义整型变量*/
	printf("交换之前的值a=%d,b=%d\n",a,b);/*提示信息*/
	exchange(a,b);		/*调用自定义函数*/
	return 0;
}
void exchange(int a,int b)/*函数的定义*/
{
	int c;                /*交换数值*/
    c=a;
    a=b;
    b=c;
    printf("交换后的值a=%d,b=%d\n",a,b);/*输出交换之后的数据*/
    
}
