#include<stdio.h>

struct in	                                        /*电脑内置零件结构体*/
{
	char in1[10];                                 /*零件1*/
	char in2[10];                                 /*零件2*/
	char in3[10];                                 /*零件3*/
};

struct out                                     /*电脑外置零件结构体*/
{
	char out1[30];                                /*零件1*/
	char out2[30];                               /*零件2*/
	char out3[30];                               /*零件3*/
	struct in ware;                              /*内置零件*/
}computer = { "电源","机箱","显示器",{ "CPU","主板","显卡" } };   /*为结构变量初始化*/

int main()
{
	printf("外置设备：\n");
	printf("（1）%s\n", computer.out1);                                /*输出结构体out成员数据*/
	printf("（2）%s\n", computer.out2);
	printf("（3）%s\n", computer.out3);
	printf("内置设备：\n");
	printf("（1）%s\n", computer.ware.in1);                           /*输出结构体in成员数据*/
	printf("（2）%s\n", computer.ware.in2);
	printf("（3）%s\n", computer.ware.in3);	
	return 0;
}
