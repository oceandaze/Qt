#include <stdio.h>
#define HOUR 365*24                         /*������ų���*/
int main()
{
    int h,result;                        /*�������*/
    printf("������Сʱ��");                 /*��ʾ*/
    scanf("%d",&h);                         /*��������*/
    result=h/(HOUR);                       /*���м���*/
    printf("һ����%d��\n",result);        /*��ʾ���*/
	return 0;                             /*�������*/
}