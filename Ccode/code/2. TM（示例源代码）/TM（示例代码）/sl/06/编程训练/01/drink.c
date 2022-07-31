#include<stdio.h>
int main()
{
	int drink;                                                            //定义变量用来存储选择的数字
	printf("数字1代表喝CocaCola，数字2代表喝coffee,请选择：\n");    //输出提示信息
	scanf("%d", &drink);                                          //输入选择的数字
	if (drink == 1)                                                //判断选择的数字是否等于1
	{
		printf("您要喝的是CocaCola\n");                   //输出选择的对应饮品
	}
	if (drink == 2)                                              //判断选择的数字是否等于2
	{
		printf("您要喝的是coffee\n");                     //输出选择的对应饮品
	}
	return 0;                                                   //程序结束
}
