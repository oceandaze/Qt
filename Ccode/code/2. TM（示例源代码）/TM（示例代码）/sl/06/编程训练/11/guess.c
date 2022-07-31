#include<stdio.h>                                         /*包含头文件*/
int main()                                                 /*主函数main*/
{
    int price=97,gue;                         /*定义变量，price是正确的数，gue为猜的数*/
    printf("请输入猜的价格：\n");
    scanf("%d",&gue);                                     /*输入猜的数*/
    if(gue<price)                                      /*判断输入猜的数小于正确的数比较*/
    {
         printf("您猜小了\n");      /*输出您猜小了*/
    }
    else if(gue>price)                                       /*判断输入猜的数大于正确的数比较*/  
    {
         printf("您猜大了\n");         /*您猜的数大了*/
    }
    else                             
    {
         printf("您猜对了\n");                    /*显示您猜对了*/
    }
      return 0;                                               /*程序结束*/
}
