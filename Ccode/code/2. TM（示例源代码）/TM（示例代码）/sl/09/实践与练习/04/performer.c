#include<stdio.h>
void Scrip(char* lead);                             //声明函数

int main()
{
	char cSelect[20] = "";                                    //定义字符数组变量,用来存储
	printf("导演选定女主角是：");                              //输出信息提示
	scanf("%s", &cSelect);                                   //输入字符串
	Scrip(cSelect);                                            //将实际参数传递给形式参数
	return 0;                                //程序结束
}
//演员开始出演这个剧本
void Scrip(char* lead)                                      //lead为形式参数
{
	printf("→*→*→*→*→*→*→*→*→*→*→*\n");
	printf("    %s开始参演李美丽角色\n", lead);                     //输出提示，参演剧本
	printf("→*→*→*→*→*→*→*→*→*→*→*\n");
}
