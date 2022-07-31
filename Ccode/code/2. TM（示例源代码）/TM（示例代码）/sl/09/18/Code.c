#include<stdio.h>
#include<ctype.h>

void SwitchShow(char c);

int main()
{
	char cCharPut;							/*定义字符变量，用来接收输入的字符*/
	char cCharTemp;						/*定义字符变量，用来接收回车符*/


	printf("请第一次输入一个字符:");						/*消息提示，第一次输入字符*/
	scanf( "%c", &cCharPut);					/*输入字符*/			
	SwitchShow(cCharPut);					/*调用函数进行判断*/
	cCharTemp=getchar();					/*接收回车符*/

	printf("请第二次输入一个字符:");					/*消息提示，第二次输入字符*/
	scanf( "%c", &cCharPut);					/*输入字符*/
	SwitchShow(cCharPut);					/*调用函数判断输入的字符*/
	cCharTemp=getchar();					/*接收回车符*/

	printf("请第三次输入一个字符:");						/*消息提示，第3次输入字符*/
	scanf( "%c", &cCharPut);					/*输入字符*/
	SwitchShow(cCharPut);					/*调用函数判断输入的字符*/
	
	return 0;								/*程序结束*/
}

void SwitchShow(char cChar)
{
	if(isalpha(cChar))						/*判断是否为字母*/
	{
		printf("您输入的是字母 %c\n",cChar);
	}

	if(isdigit(cChar))						/*判断是否为数字*/
	{
		printf("您输入的是数字 %c\n", cChar);
	}
	
	if(isalnum(cChar))						/*判断是否为字母或者数字*/
	{
		printf("您输入的是字母或者数字 %c\n", cChar);
	}

	else									/*当字符既不是字母也不是数字时*/
	{
		printf("您输入的是既不是字母也不是数字:%c\n", cChar);
	}
}
