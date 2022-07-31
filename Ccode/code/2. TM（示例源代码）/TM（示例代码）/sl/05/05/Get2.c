#include <stdio.h>
int main()
{
    char account[20],password[20],name[20],IDcard[20];               /*定义四字符数组变量*/
    puts("请输入账号：");           /*提示信息*/ 
    gets(account);                  /*获取字符串*/
	
    puts("请输入密码： ");          /*提示信息*/
    gets(password);                  /*获取字符串*/

    puts("请输入姓名： ");         /*提示信息*/
    gets(name);                 /*获取字符串*/ 

    puts("请输入身份证号： ");    /*提示信息*/
    gets(IDcard);                /*获取字符串*/

   puts("注册完成，信息如下：");
    puts("您输入的账号为：");       /*提示信息*/
    puts(account);                  /*输出字符串*/
	puts("您输入的姓名为：");      /*提示信息*/
    puts(name);                /*输出字符串*/
	puts("您输入的密码为：");       /*提示信息*/
    puts(password);                  /*输出字符串*/
	puts("您输入的身份证号为：");/*提示信息*/
    puts(IDcard);               /*输出字符串*/
	return 0;                    /*程序结束*/
}