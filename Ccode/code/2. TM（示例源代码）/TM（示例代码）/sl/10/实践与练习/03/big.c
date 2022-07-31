/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   小猪渡河
*/
#include<stdio.h>                           		//包含头文件
int main()                                  		//主函数main
{
	int a = 6 / (3 - 1) + 1;                          	//计算几次能渡过
	int *p;                                    	//定义指针变量
	p = &a;                                   	  	//将地址赋给指针变量
	printf("\n会划船的猪每次只能载2只猪过去\n会划船的猪一直在船上\n");
	printf("因此至少", *&a);     	//利用*&输出次数
	printf("%d", *&a);     	//利用*&输出次数
	printf("次能全部渡过河\n", *&a);     	//利用*&输出次数
	
	return 0;                                   	//程序结束
}
