#include<stdio.h>
int main()
{
//定义变量，分别表示半径、母线、孤长、圆锥侧面积、扇形面积
	double radius=2.0f,L1=3.0f,L2=3.5f,cone,sector; 
	cone = 3.14*L1*radius;   //计算圆锥侧面积
	sector = 0.5*L2*radius;  //计算扇形面积
	if (cone>sector)         //如果圆锥侧面积比扇形面积大
	{
	printf("圆锥的面积比扇形的面积大\n");             //输出对应提示信息
	}
	if (cone<sector)                                 //如果圆锥侧面积比扇形面积小
	{
		printf("圆锥的面积比扇形的面积小\n");         //输出对应提示信息
	}
	if (cone==sector)                                //如果圆锥侧面积与扇形面积相等
	{
		printf("圆锥的面积比扇形的面积一样大\n");    //输出对应提示信息
	}
	printf("圆锥的侧面积是%.2lf平方厘米\n", cone);     //输出圆锥侧面积
	printf("扇形的面积是%.2lf平方厘米\n", sector);    //输出扇形面积
	return 0;                                          //程序结束
}
