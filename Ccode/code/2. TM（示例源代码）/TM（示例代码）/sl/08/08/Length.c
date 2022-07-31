#include<stdio.h>
int main()
{
	int iIndex;								/*循环控制变量*/
    int  length=0;                          /*定义变量length保存字符串长度*/
	char cArray[80];			            /*定义字符数组用于保存字符串*/
    printf("请输入字符串：\n");/*提示信息*/
    gets(cArray);/*用gets函数输入字符串*/
	for(iIndex=0;cArray[iIndex]!='\0';iIndex++)/*循环每个字符，直到\0结束*/
	{
      	length++; /*长度累加*/
	}
	 printf("字符串长度是：%d\n",length); 	/*输出长度*/	 
	return 0;
}
