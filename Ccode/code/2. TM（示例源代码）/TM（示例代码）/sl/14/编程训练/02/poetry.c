#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<process.h>
void main()
{
    FILE* fp;                             /*����һ��ָ��FILE���ͽṹ���ָ�����*/
    char filename[30], str[300];            /*���������ַ�������*/
    printf("�������ļ�·��:\n");
    scanf("%s", filename);                    /*�����ļ���*/
    if ((fp = fopen(filename, "w")) == NULL)    /*�ж��ļ��Ƿ��ʧ��*/
    {
        printf("can not open!\npress any key to continue:\n");
        getchar();
        exit(0);
    }
    printf("Ĭд��ʫ����������:\n");        /*��ʾ�����ַ���*/
    getchar();
    gets(str);
    fputs(str, fp);                        /*���ַ���д��fp��ָ����ļ���*/
    fclose(fp);                            /*�ر��ļ�*/
}
