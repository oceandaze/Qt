#include<stdio.h>
extern void GetAngle(int a,int b,int c)
{
    float a1=0,b1=0,c1=0;/*定义变量，用来表示三角形内角*/
    a1=(float)180*a/(a+b+c);/*求每个内角*/
    b1=(float)180*b/(a+b+c);
    c1=(float)180*c/(a+b+c);
    printf("内角的度数分别是：%.1f,%.1f,%.1f\n",a1,b1,c1);/*输出内角度数*/
 
}