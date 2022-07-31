#include<stdio.h>


void  IT();				//声明函数
void  Internet();
void  program();
void  Clanguage();

int main()
{
	IT();					//调用IT的作用函数
	return 0;
}

void  IT()
{
	//输出信息，表示调用IT函数进行相应的操作
	printf("（1）找到IT分类\n");
	Internet();              //调用Intenet的功能函数
}

void  Internet()
{
	//输出信息，表示调用Intenet函数进行相应的操作
	printf("（2）IT分类中找到互联网分类\n");
	program();         //调用program的作用函数
}

void  program()
{
	//输出信息，表示调用program函数进行相应的操作
	printf("（3）互联网分类中找到编程语言分类\n");
	Clanguage();//调用Clanguage的作用函数
}

void Clanguage()
{
	//输出信息，表示调用Clanguage函数进行相应的操作
	printf("（4）编程语言分类找到C语言课程\n");
}