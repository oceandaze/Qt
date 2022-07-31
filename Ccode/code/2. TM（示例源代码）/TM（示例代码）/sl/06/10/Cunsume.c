#include<stdio.h>
int main()
{
    float money=1026,m;                          /*定义变量money是所花的金额 m是打折之后所花费用*/
    float rebate=0.0f;                         /*定义折扣变量*/
       int grade=(int)money/500;               /*计算等级*/
       switch(grade)                           /*根据等级计算折扣*/
       {
       case 0:                                 /*未满500元*/
           rebate=0.0f;                        /*折扣为0*/
           m=money;                            /*原价购买*/
         //  break;                              /*跳出*/
       case 1:                                 /*刚好满500元*/
           rebate=0.9f;                        /*折扣为9折*/
           m=money*rebate;                      /*计算折扣之后的费用*/
          //break;                               /*跳出*/
       case 2:                                  /*满1000元*/
           rebate=0.8f;                         /*折扣为8折*/
           m=money*rebate;                      /*计算折扣之后的费用*/
          //break;                               /*跳出*/
       case 4:                                  /*满2000元*/
           rebate=0.7f;                         /*折扣为7折*/
           m=money*rebate;                       /*计算折扣之后的费用*/
           //break;                                /*跳出*/
       case 6:                                   /*满3000元*/
           rebate=0.6f;                          /*折扣为6折*/
           m=money*rebate;                        /*计算折扣之后的费用*/
           //break;                                 /*跳出*/
	   default:
           rebate=0.5f;                             /*折扣为5折*/
           m=money*rebate;                        /*计算的费用*/
		   //break;
       }
       printf("原价是：%f\n顾客将享受的折扣:%f\n",money,rebate);    /*输出原价和对应折扣*/
       printf("打扣后需支付的金额:%f\n",m);       /*计算所花费用*/
       return 0;
}