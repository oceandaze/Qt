#include<stdio.h>

void AddOne()
{
	auto int iInt=1;						/*����auto���ͱ���*/
	iInt=iInt+1;						/*������1*/
	printf("%d\n",iInt);					/*��ʾ���*/
}
int main()
{
	printf("��һ�ε��ã�");				/*��ʾ���*/
	AddOne();							/*����AddOne����*/
	printf("�ڶ��ε��ã�");				/*��ʾ���*/
	AddOne();							/*����AddOne����*/
	return 0;							/*�������*/
}
