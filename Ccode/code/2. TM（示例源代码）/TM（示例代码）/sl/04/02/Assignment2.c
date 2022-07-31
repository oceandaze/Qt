#include<stdio.h>
int main()
{
    
    int price=3;                                /*定义变量，为其赋初值，表示每公里路程花费的钱数*/
	int journey1=10;                            /*表示具体目的地距离*/
	int journey2=3;                             /*表示返回路程的距离*/
	int money;                                  /*表示最终的费用*/
    money=journey1*price+journey2*price;        /*将表达式的结果赋值给变量*/
    printf("总共花了%d元\n",money);             /*显示结果*/
    return 0;                                   /*程序结束*/
}