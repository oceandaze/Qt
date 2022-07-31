#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
    FILE* fp;                                /*定义一个指向FILE类型结构体的指针变量*/
    char ch;                                /*定义变量及数组为字符型*/
    fp = fopen("f:\\exp.txt", "r");        /*以只读方式打开指定文件*/
    ch = fgetc(fp);                        /*fgetc函数返回一个字符赋给ch*/
    while (ch != EOF)                        /*当读入的字符值等于EOF时结束循环*/
    {
        putchar(ch);                        /*将读入的字符输出在屏幕上*/
        ch = fgetc(fp);                        /*fgetc函数继续返回一个字符赋给ch*/
    }
    printf("\n");
    fclose(fp);                            /*关闭文件*/
}
