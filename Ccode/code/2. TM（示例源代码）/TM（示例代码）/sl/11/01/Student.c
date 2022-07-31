#include "stdio.h"/*包含头文件*/
#include<string.h>
struct Teacher /*声明结构体*/
{
    char name[64]; /* 姓名*/
    int age;       /* 年龄*/
    int seniority; /* 教龄*/
 };

int main()
{
  
    struct Teacher a_teacher;/*定义结构体变量*/
    strcpy(a_teacher.name, "明师");/*将姓名复制给结构体变量*/
    a_teacher.age = 35;/*年龄*/
    a_teacher.seniority = 10;/*教龄*/
    printf("姓名:%s\n",a_teacher.name);/*输出结构体变量*/
    printf("年龄:%d\n",a_teacher.age);
    printf("教龄:%d\n",a_teacher.seniority);
    return 0;
}
