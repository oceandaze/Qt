#include<stdio.h>
int main()
{
	int money;
	printf("�������н���");
	scanf("%d",&money);
	if (money>=500)
		printf("������%d������������\n",money);
	else if(money<500 && money>200)
		printf("������%d������\n",money);
	else if(money<=200 && money>50)
		printf("������%d���򱼳�\n",money);
	else if(money<=50 && money>0)
		printf("������%d����µ�\n",money);
	else
		printf("�óԷ��Է�����˯��˯��\n");
}