#include<stdio.h>								/*包含头文件*/
void main()									/*主函数main*/
{
    unsigned result; 							/*定义无符号变量*/
    int a; 									/*定义变量*/
    printf("please input a:"); 					/*提示输入一个数*/
    scanf("%d",&a); 							/*输入数据*/
    printf("a=%d", a);	 						/*显示输入的数据*/
    result = ~a; 								/*求a的反*/
    printf("\n~a=%o\n", result); 				/*显示结果*/
}
