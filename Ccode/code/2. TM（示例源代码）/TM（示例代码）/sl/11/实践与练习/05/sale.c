#include<stdio.h>                   		//包含头文件
struct sale                          		//汽车结构体
{
	char number[20];	                	//汽车品牌名
	char cName[20];                   	//汽车报价
	int num;
} sale[5] = { { "T0001","笔记本电脑",2 },          	//定义变量并初始化
{ "T0002","华为荣耀6X",10},
{ "T0003","iPad",2 },
{ "T0004","华为荣耀V9",20 },
{ "T0005","MacBock",5 } };
int main()                          		//主函数main
{
	int i;                          		//循环控制变量
	printf("5月份的商品销售明细如下：\n");
	for (i = 0; i<5; i++)                	//使用for进行循环
	{
		printf("商品编号: %s  商品名称：%s  销售数量: %d台\n", sale[i].number, sale[i].cName,sale[i].num);//输出数组中的元素数据
		printf("\n");		        	//空格行
	}
	return 0;                       	//程序结束
}
