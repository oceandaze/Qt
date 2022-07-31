#include<stdio.h>

void Move();							/*声明搬运函数*/
void Build();							/*声明建造函数*/
void Paint();							/*声明粉刷函数*/

int main()
{
	Move();							/*执行搬运函数*/
	Build();							/*执行建造函数*/
	Paint();							/*执行粉刷函数*/

	return 0;							/*程序结束*/
}


void Move()
{
	printf("执行搬运功能\n");
}

void Build()
{
	printf("执行建造功能\n");
}

void Paint()
{
	printf("执行粉刷功能\n");
}
