#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
enum Fruits { Watermelon, Mango, Grape, Orange, Apple };
int main()
{
    int fruits;
    printf("%d代表西瓜,%d代表芒果,%d代表葡萄,%d代表橘子,%d代表苹果\n", Watermelon, Mango, Grape, Orange, Apple);
    printf("请输入你想吃的水果代表的数字：\n");
    scanf("%d",&fruits);
    if (fruits== Watermelon)
    {
        printf("你想吃西瓜\n");
    }
    else if (fruits == Mango)
    {
        printf("你想吃芒果\n");
    }
    else if (fruits == Grape)
    {
        printf("你想吃葡萄\n");
    }
    else if (fruits == Orange)
    {
        printf("你想吃橘子\n");
    }
    else if (fruits == Apple)
    {
        printf("你想吃苹果\n");
    }
   
}