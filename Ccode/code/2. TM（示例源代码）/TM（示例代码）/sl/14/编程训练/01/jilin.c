#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
    FILE* fp;                                /*����һ��ָ��FILE���ͽṹ���ָ�����*/
    char ch;                                /*�������������Ϊ�ַ���*/
    fp = fopen("f:\\exp.txt", "r");        /*��ֻ����ʽ��ָ���ļ�*/
    ch = fgetc(fp);                        /*fgetc��������һ���ַ�����ch*/
    while (ch != EOF)                        /*��������ַ�ֵ����EOFʱ����ѭ��*/
    {
        putchar(ch);                        /*��������ַ��������Ļ��*/
        ch = fgetc(fp);                        /*fgetc������������һ���ַ�����ch*/
    }
    printf("\n");
    fclose(fp);                            /*�ر��ļ�*/
}
