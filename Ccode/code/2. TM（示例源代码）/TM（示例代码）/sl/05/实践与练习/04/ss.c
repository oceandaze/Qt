/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   字母大小写的密码
*/
#include<stdio.h>                              //头文件

int main()                                    //主函数
{
	char c1, c2;                              //定义字符变量
	printf("请输入一个小写字母：\n");         //输出提示信息
	c1 = getchar();                           //输入字母赋给变量c1
	c2 = c1 - 32;                             //将小写的ASCII码值减32，得到对应的大写字母ASCII值
	printf("& & & & & & & & & & & & &\n");
	printf("&  转换以后的字母：%c    &\n", c2);//输出对应的大写字母
	printf("& & & & & & & & & & & & &\n");
	return 0;				                  //程序结束
}
