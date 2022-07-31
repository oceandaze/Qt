#include<stdio.h>

int main()
{
    int x=1;                                 /*定义变量表示几代*/
    int num=1;                                /*定义变量表示菌落数*/
   while(x<=12)/*检验条件，代数小于等于12*/
     {
         num*=2;                                 /*成倍数增长*/
         x++;/*增加代数*/
      }
     printf("第十二代菌落中的细菌数量是%d\n",num); /*将结果输出*/
     
      return 0;
}