#include<stdio.h>
struct Book                                          //定义猫的结构体
{
	char cName[50];                              //喵名
	float price;	                                     //喵龄
	
} book[5] = { {"零基础学C语言(全彩版)",61.10f},                 //定义数组并初始化
			   {"C语言从入门到项目实践(全彩版)",99.80f},
			   {"玩转C语言程序设计（全彩版）",36.10f},
			   {"C语言精彩编程200例（全彩版）",69.80f},
			   {"C语言项目开发实战入门（全彩版）",52.30f} };

int main()                                       //主函数main
{
	int i;                                          //循环控制变量
	for (i = 0; i < 5; i++)                         //使用for进行循环
	{
		printf("第%d本图书:\n", i + 1);
		//输出结构体数组中的元素数据
		printf("图书名： %s,价格：%.2f元\n", book[i].cName, book[i].price);
		printf("\n");                             //空格行
	}
	return 0;                                      //程序结束
}
