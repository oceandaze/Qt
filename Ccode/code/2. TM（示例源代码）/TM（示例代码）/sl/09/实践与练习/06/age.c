#include<stdio.h>
int getage(int n);//声明函数
int main()
{
	int age;//定义整型变量，存储年龄
	age = getage(5);//调用函数计算年龄
	printf("-------------------------------\n");
	printf("        戊的年龄是：%d岁\n", age);//输出戊的年龄
    printf("-------------------------------\n");
	return 0;//程序结束
}
int getage(int n)//自定义函数
{
	if (n==1)//如果是甲
	{
		return 10;//返回10岁
	}
	return 2 + getage(n - 1);//递归调用，调用getage()本身函数同时加2
}