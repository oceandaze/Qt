#include<stdio.h>

struct cat
{
	char cName[10];                              //����
	int age;	                                     //����
	float weight;                                //����
	char sex[10];                                    //�Ա�
}cat1 = { "�ǿ�",1,4.9f,"��" };                      //������������ó�ʼֵ

int main()
{
	printf("����:%s\n", cat1.cName);     
	printf("����:%d\n", cat1.age);     
	printf("������:%.2f\n", cat1.weight);
	printf("�����Ա�:%s\n", cat1.sex);   
	
	return 0;
}
