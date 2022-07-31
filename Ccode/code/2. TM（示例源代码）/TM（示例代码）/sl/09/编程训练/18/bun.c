#include<stdio.h>                                   //包含输入输出函数库
#include<string.h>                                  //包含字符串复制函数库

int main()                                                //主函数main
{
	char old[30]="包子一元一个",new1[30]="包子壹圆壹个";    //定义字符数组用来存储招牌的新旧内容
	printf("原来的招牌的内容是：\n");                       //输出招牌旧内容提示信息
	printf("%s\n", old);                                   //输出招牌旧的内容
	strcpy(old,new1);                                    //利用strcpy函数将新招牌内容复制到旧招牌上
	printf("经过处理之后的招牌的内容是:\n");            //输出招牌上新内容提示信息
	printf("%s\n", old);                               //输出招牌新的内容
	return 0;                                           //程序结束
}
