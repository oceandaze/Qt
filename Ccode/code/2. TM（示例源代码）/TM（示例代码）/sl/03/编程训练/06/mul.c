#include<stdio.h>

void mul()
{
	auto int a=3;						/*定义auto整型变量*/
	a=a*2;						/*变量翻倍*/
	printf("%d\n",a);					/*显示结果*/
}
int main()
{
	printf("第1次调用：");				/*显示结果*/
	mul();							/*调用mul函数*/
	printf("第2次调用：");				/*显示结果*/
	mul();							/*调用mul函数*/
	printf("第3次调用：");				/*显示结果*/
	mul();							/*调用mul函数*/
	printf("第4次调用：");				/*显示结果*/
	mul();							/*调用mul函数*/
	printf("第5次调用：");				/*显示结果*/
	mul();							/*调用mul函数*/
	return 0;							/*程序结束*/
}
