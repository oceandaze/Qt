#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>                                /*����ͷ�ļ�*/
void main()                                    /*������main*/
{
    unsigned result;                             /*�����޷��ű���*/
    int a;                                     /*�������*/
    printf("please input a:");                     /*��ʾ����һ����*/
    scanf("%d", &a);                             /*��������*/
    printf("a=%d", a);                             /*��ʾ���������*/
    result = ~a;                                 /*��aȡ��*/
    printf("\n~a=%o\n", result);                 /*��ʾ���*/
}
