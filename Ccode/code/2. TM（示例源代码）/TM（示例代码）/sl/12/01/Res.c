#include<stdio.h>								/*包含头文件*/
void main()									/*主函数main*/
{
    unsigned result; 						/*定义无符号变量*/
    int age1, age2; 						/*定义变量*/
    printf("请输入第一个人年龄age1:");			/*提示输入年龄1*/
    scanf("%d",&age1); 						/*输入年龄1*/
    printf("请输入第二个人年龄age2:"); 			/*提示输入年龄2*/
    scanf("%d",&age2); 						/*输入年龄2*/
    printf("age1=%d, age2=%d", age1, age2); /*显示年龄*/
    result = age1&age2; 					/*计算"与"运算的结果*/
    printf("\nage1&age2=%u\n", result); 	/*输出计算结果*/
}
