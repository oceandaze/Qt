#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>                                        /*����ͷ�ļ�*/
left(unsigned value, int n)                                /*�Զ������ƺ���*/
{
    unsigned z;
    z = (value >> (32 - n)) | (value << n);                /*ѭ�����Ƶ�ʵ�ֹ���*/
    return z;
}
void main()                                            /*������main*/
{
    unsigned a;                                         /*�����޷����ͱ���*/
    int n;                                             /*�������*/
    printf("����Ҫ��λ������:\n");                    /*�����ʾ��Ϣ*/
    scanf("%d", &a);                                    /*����һ���˽�����*/
    printf("����Ҫ��λ��λ����>0��:\n");
    scanf("%d", &n);                                    /*����Ҫ��λ��λ��*/
    printf("���Ľ���� %d\n", left(a, n));            /*�����ƺ�Ľ�����*/
}
