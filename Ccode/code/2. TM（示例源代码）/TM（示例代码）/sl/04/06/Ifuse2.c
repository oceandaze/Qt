#include <stdio.h>
int main()
{
    int money;                        /*定义变量，用来保存钱数*/
    printf("输入手里的钱数: \n");    /*提示信息*/
    scanf("%d",&money);             /*输入钱数*/
    if(money>=2)                    /*利用关系运算符判断钱数是否大于等于2*/
        printf("你可以买可乐\n");   /*提示信息*/
    if(money<2)                     /*利用关系运算符判断钱数是否小于2*/
        printf("你可以买矿泉水\n"); /*提示信息*/
    return 0;                       /*程序结束*/
}