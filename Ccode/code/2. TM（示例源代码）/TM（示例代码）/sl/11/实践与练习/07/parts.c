#include<stdio.h>

struct tastes											//结构体
{
	char taste1[10];										//口味1
	char taste2[10];										//口味2
	char taste3[10];										//口味3
};

struct Information											//面包基本信息结构体
{
	char name[30];									//品牌名
	int price;										//零售价格
	int weight;										//重量
	struct tastes sweet;								//口味
}information = { "桃李",5,350,{ "原味","紫薯味","水果味" } };			//为结构变量初始化

int main()
{
	printf("基本信息：\n");
	printf("品牌：%s\n", information.name);				//输出结构体information成员数据
	printf("零售价：%d元\n", information.price);
	printf("重量：%dg\n", information.weight);
	printf("口味种类：\n");
	printf("口味1：%s\n", information.sweet.taste1);//输出结构体tastes成员数据
	printf("口味2：%s\n", information.sweet.taste2);
	printf("口味3：%s\n", information.sweet.taste3);	
	return 0;
}
