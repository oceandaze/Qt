#include<stdio.h>
#define STR "100��" /*����곣��*/
int main()
{
    #ifdef STR          /*ȡ������*/
        printf(STR);/*�����Ϣ*/
        printf("�ܰ���ҵ��\n");/*�����Ϣ*/
    #endif
    printf("\n");
    #ifndef ABC         /*ûȡ���룬��ʾû������*/
        printf("ûȡ���Ų��ܰ���ҵ��\n");/*�����Ϣ*/
    #endif
        return 0;
}
