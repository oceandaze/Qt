#include<stdio.h>
int main()
{
    int time;                                       /*�������*/
	printf("�������ʱ��ʱ�䣺");
    scanf("%d",&time);                              /*����ʱ��*/
    if(time<12)                                     /* ����ʱ��С��12ʱ*/
        printf("Good morning\n"); /*�жϽ��Ϊ��ʱ���*/
    if(time==12)       /* ����ʱ�����12ʱ*/                                  
        printf("Good Noon\n");/*�жϽ��Ϊ��ʱ���*/
    else             /* ����ʱ�����12ʱ*/                                  
        printf("Good day\n");/*�жϽ��Ϊ��ʱ���*/
      return 0;
}