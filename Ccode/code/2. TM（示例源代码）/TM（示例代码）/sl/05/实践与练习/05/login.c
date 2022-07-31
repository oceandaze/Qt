/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   模拟用户登录
*/
#include<stdio.h>                              //头文件
#include<windows.h>			//控制dos界面

int main()//主函数
{
	char cString[20];//定义字符数组，用来存储字符串
	puts("请输入账号：");//提示信息
	gets(cString);//输入账号字符串
	
	puts("您输入的账号为：");//提示信息
	puts(cString);//输出账号字符串

	puts("请输入密码： ");//提示信息
	gets(cString);//输入密码字符串
	
	puts("您输入的密码为：");//提示信息

	puts(cString);//输出密码字符串
	puts("≈≈≈≈≈≈≈≈≈≈≈≈≈");
	puts("|    您的账号登录成功    |");
	puts("≈≈≈≈≈≈≈≈≈≈≈≈≈");
	return 0;//程序结束
}