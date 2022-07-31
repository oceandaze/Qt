#include<stdio.h>
int main()
{
    int time;                                       /*定义变量*/
	printf("请输入此时的时间：");
    scanf("%d",&time);                              /*输入时间*/
    if(time<12)                                     /* 输入时间小于12时*/
        printf("Good morning\n"); /*判断结果为真时输出*/
    if(time==12)       /* 输入时间等于12时*/                                  
        printf("Good Noon\n");/*判断结果为真时输出*/
    else             /* 输入时间大于12时*/                                  
        printf("Good day\n");/*判断结果为真时输出*/
      return 0;
}