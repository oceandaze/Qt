#include<stdio.h>									     //头文件
int main()                                                  //主函数
{
   	double foot = 37.5f;                                 //定义双精度变量，用来表示脚的大小
 	int size = (int)foot+1;                              //强制类型转换，表示鞋码的大小
 	printf("您的脚是%.1f码的尺寸\n", foot);              //输出脚的大小
 	printf("您应该买%d码的鞋子\n",size);                 //输出鞋码的大小
	     return 0;                                              //程序结束
}
