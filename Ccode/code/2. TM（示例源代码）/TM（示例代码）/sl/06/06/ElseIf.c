#include<stdio.h>
int main()
{
    int x,y;                                  /*定义变量x,y*/
	printf("请输入x的值：");
    scanf("%d",&x);                          /*输入x的数*/
    if(x<1)                                  /*判断输入x小于1*/
    {
        y=x;                                   /*如果为真，将x的值赋给y*/
        printf("y=%d\n",y);                   /*输出y的值*/
    }
    else if(x>=1&&x<10)   /*判断输入x大于等于1并且x小于10*/                                      
    {
        y=2*x-1; /*如果为真，将计算2*x-1的值赋给y*/
        printf("y=%d\n",y); /*输出y的值*/
    }
    else     /*x为其他数值时*/                                  
    {
        y=3*x-11;/*如果为真，将计算3*x-11的值赋给y*/
        printf("y=%d\n",y); /*输出y的值*/
    }
      return 0;
}