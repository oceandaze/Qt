#include<stdio.h>
int main()
{
    
    int price=3;                                /*���������Ϊ�丳��ֵ����ʾÿ����·�̻��ѵ�Ǯ��*/
	int journey1=10;                            /*��ʾ����Ŀ�ĵؾ���*/
	int journey2=3;                             /*��ʾ����·�̵ľ���*/
	int money;                                  /*��ʾ���յķ���*/
    money=journey1*price+journey2*price;        /*�����ʽ�Ľ����ֵ������*/
    printf("�ܹ�����%dԪ\n",money);             /*��ʾ���*/
    return 0;                                   /*�������*/
}