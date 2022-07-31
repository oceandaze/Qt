/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   无人商店产品基本信息
*/
#include<stdio.h>                   		
struct goods                         		//商品结构体
{
	char cName[20];	                	//商品品牌名
	float  price;                   	//零售价

} goods[5] = { { "康师傅方便面",2.5f },          	//定义数组并初始化
{ "农夫山泉",2.0f },
{ "玉米肠",3.0f },
{ "可比克薯片",3.0f},
{ "蒙牛核桃奶",2.5f } };
int main()                          		//主函数main
{
	int i;                          		//循环控制变量
	for (i = 0; i<5; i++)                	//使用for进行循环
	{
		printf("\n第%d种产品:\n", i + 1);
		//输出结构体数组中的元素数据
		printf("名字是: %s,单价是：%.2f元\n", goods[i].cName,goods[i].price);
		printf("\n");		        	//空格行
	}
	return 0;                       	//程序结束
}
