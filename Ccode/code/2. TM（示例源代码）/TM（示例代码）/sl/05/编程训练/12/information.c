#include<stdio.h>
int main()
{
	int age;
	float height,weight;
	char sex;
	printf("�����������Ա�:");
	scanf("%c",&sex);
	printf("��������������:");
	scanf("%d",&age);
	printf("�������������:");
	scanf("%f",&height);
	printf("��������������:");
	scanf("%f",&weight);
	
	printf("---���Ļ�����Ϣ----\n");
	printf("�Ա�%c\n",sex);
	printf("���䣺%d\n",age);
	printf("��ߣ�%.2f\n",height);
	printf("���أ�%.2f\n",weight);
	
	return 0;
}