#include<stdio.h>

struct in	                                        /*������������ṹ��*/
{
	char in1[10];                                 /*���1*/
	char in2[10];                                 /*���2*/
	char in3[10];                                 /*���3*/
};

struct out                                     /*������������ṹ��*/
{
	char out1[30];                                /*���1*/
	char out2[30];                               /*���2*/
	char out3[30];                               /*���3*/
	struct in ware;                              /*�������*/
}computer = { "��Դ","����","��ʾ��",{ "CPU","����","�Կ�" } };   /*Ϊ�ṹ������ʼ��*/

int main()
{
	printf("�����豸��\n");
	printf("��1��%s\n", computer.out1);                                /*����ṹ��out��Ա����*/
	printf("��2��%s\n", computer.out2);
	printf("��3��%s\n", computer.out3);
	printf("�����豸��\n");
	printf("��1��%s\n", computer.ware.in1);                           /*����ṹ��in��Ա����*/
	printf("��2��%s\n", computer.ware.in2);
	printf("��3��%s\n", computer.ware.in3);	
	return 0;
}
