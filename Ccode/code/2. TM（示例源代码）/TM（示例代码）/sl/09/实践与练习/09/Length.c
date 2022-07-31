/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   注册明日学院VIP账号
*/
#include <stdio.h>                                         //包含输入输出函数库
#include <string.h>                                       //包含strlen()函数库

int main()
{
	char text[20];                                          //定义字符数组保存账号
	printf("请输入您想注册的明日学院账号:\n");             //输出信息提示
	scanf("%s", &text); 	                                 //输入注册的账号
	if (strlen(text) >= 4 && strlen(text) <= 12)         //比较字符串的长度，要求长度在4-12个字符
		printf("注册成功\n");                              //输出成功提示
	else
		printf("您输入的账号不符合要求，请重新输入！\n");   //输出失败提示
	return 0;                                               //程序结束
}
