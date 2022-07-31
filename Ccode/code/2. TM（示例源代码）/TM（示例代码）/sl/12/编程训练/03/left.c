#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>                                        /*包含头文件*/
left(unsigned value, int n)                                /*自定义左移函数*/
{
    unsigned z;
    z = (value >> (32 - n)) | (value << n);                /*循环左移的实现过程*/
    return z;
}
void main()                                            /*主函数main*/
{
    unsigned a;                                         /*定义无符号型变量*/
    int n;                                             /*定义变量*/
    printf("输入要移位的数字:\n");                    /*输出提示信息*/
    scanf("%d", &a);                                    /*输入一个八进制数*/
    printf("输入要移位的位数（>0）:\n");
    scanf("%d", &n);                                    /*输入要移位的位数*/
    printf("最后的结果是 %d\n", left(a, n));            /*将左移后的结果输出*/
}
