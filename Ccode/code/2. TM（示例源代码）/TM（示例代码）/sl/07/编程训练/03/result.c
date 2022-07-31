#include<stdio.h>

int main()
{
	int iNumber = 1;                                       //定义变量，表示1～100之间的数字
	int iSum = 0;                                       //保存计算后的结果
	do
	{
		iSum = iSum + iNumber;                       //累加计算
		iNumber++;                                    //循环变量自增
	} while (iNumber <= 100);                        //循环条件
	printf("1~100的和是:%d\n", iSum);              //输出计算结果
	return 0;                                        //程序结束
}
