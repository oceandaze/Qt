#include<stdio.h>
int main()
{
   
    int a=10,b=11;                      	/*声明两个整型变量并初始化*/
    int *ipointer1,*ipointer2;				/*声明两个整型指针变量*/
    ipointer1 = &a;	                       /*将地址赋给指针变量*/			
    ipointer2=&b;
     if(a>b)                               /*比较大小*/
        printf("a的值大\n");
    else
        printf("b的值大\n");
    
    return 0;

}