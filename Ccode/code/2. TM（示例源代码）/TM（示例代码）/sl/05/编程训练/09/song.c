#include<stdio.h>                             //头文件
int main()                                     //主函数
{
	int beat;                                 //定义整型变量
	puts("请输入你想拍几：");                 //输出提示信息
	scanf("%d", &beat);                      //输入整型变量
	printf("你拍%d,我拍%d\n", beat, beat); //输出你拍1我拍1
	return 0;                                //程序结束
}
