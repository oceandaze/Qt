#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
enum Fruits { Watermelon, Mango, Grape, Orange, Apple };
int main()
{
    int fruits;
    printf("%d��������,%d����â��,%d��������,%d��������,%d����ƻ��\n", Watermelon, Mango, Grape, Orange, Apple);
    printf("����������Ե�ˮ����������֣�\n");
    scanf("%d",&fruits);
    if (fruits== Watermelon)
    {
        printf("���������\n");
    }
    else if (fruits == Mango)
    {
        printf("�����â��\n");
    }
    else if (fruits == Grape)
    {
        printf("���������\n");
    }
    else if (fruits == Orange)
    {
        printf("���������\n");
    }
    else if (fruits == Apple)
    {
        printf("�����ƻ��\n");
    }
   
}