#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>/*包含头文件*/
right(unsigned value, int n)                            /*自定义右移函数*/
{
    unsigned z;
    z = (value << (32 - n)) | (value >> n);                /*循环右移的实现过程*/
    return z;
}
void main()                                            /*主函数main*/
{
    unsigned a;                                         /*定义变量*/
    int n;
    printf("请输入数字:\n");                    /*输出提示信息*/
    scanf("%d", &a);                                    /*输入一个八进制数*/
    printf("请输入要移位的位数（>0）:\n");
    scanf("%d", &n);                                    /*输入要移位的位数*/
    printf("循环右移的结果是 %d\n", right(a, n));            /*将右移后的结果输出*/
}
