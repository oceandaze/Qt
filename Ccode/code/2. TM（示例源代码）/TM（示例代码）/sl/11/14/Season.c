#include<stdio.h>

enum Color{Red=1,Blue,Green} color;			/*定义枚举变量，并初始化*/
int main()
{	
	int icolor;								/*定义整型变量*/
	printf("1代表红色，2代表蓝色，3代表绿色。\n");
	printf("请输入您要选择的数字：");
	scanf("%d",&icolor);						/*输入数据*/
	switch(icolor)							/*判断icolor值*/
	{
	case Red:								/*枚举常量，Red表示1*/
		printf("选择红色\n");
		break;
	case Blue:							/*枚举常量，Blue表示2*/
		printf("选择蓝色\n");
		break;
	case Green:							/*枚举常量，Green表示3*/
		printf("选择绿色\n");
		break;
	default:
		printf("???\n");
		break;
	}
	return 0;
}
