#include<stdio.h>
int *tree(int sum,int exceed);
int p1;


void main()
{
	int sum,exceed;
	int *iResult;
	printf("�������ܹ�ֲ����������\n");
	scanf("%d",&sum);
	printf("���������꼶�����꼶��ֲ����������\n");
	scanf("%d",&exceed);
	iResult=tree(sum,exceed);
	printf("���꼶ֲ���������ǣ�");
	printf("%d\n",*iResult);
	printf("���꼶ֲ���������ǣ�%d\n",128-(*iResult));
}

int *tree(int sum,int exceed)
{
	int *p;
	p=&p1;
	p1=(sum-exceed)/2;
	return p;
}
