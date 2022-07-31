#include<stdio.h>

void CEO();								/*声明函数*/
void Manager();
void AssistantManager();
void Clerk();

int main()
{
	CEO();								/*调用CEO的功能函数*/
	return 0;
}

void CEO()
{
			/*输出信息，表示调用CEO函数进行相应的操作*/
	printf("CEO交代给总经理\n");
	Manager();							/*调用Manager的功能函数*/
}

void Manager()
{
			/*输出信息，表示调用Manager函数进行相应的操作*/
	printf("总经理交代给部门经理\n");
	AssistantManager();						/*调用AssistantManager的功能函数*/
}

void AssistantManager()
{
			/*输出信息，表示调用AssistantManager函数进行相应的操作*/
	printf("部门经理交代给总各个职员\n");
	Clerk();								/*调用Clerk的功能函数*/
}

void Clerk()
{
			/*输出信息，表示调用Clerk函数进行相应的操作*/
	printf("职员开始执行\n");
}
