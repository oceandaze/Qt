#include<stdio.h>

struct tastes											//�ṹ��
{
	char taste1[10];										//��ζ1
	char taste2[10];										//��ζ2
	char taste3[10];										//��ζ3
};

struct Information											//���������Ϣ�ṹ��
{
	char name[30];									//Ʒ����
	int price;										//���ۼ۸�
	int weight;										//����
	struct tastes sweet;								//��ζ
}information = { "����",5,350,{ "ԭζ","����ζ","ˮ��ζ" } };			//Ϊ�ṹ������ʼ��

int main()
{
	printf("������Ϣ��\n");
	printf("Ʒ�ƣ�%s\n", information.name);				//����ṹ��information��Ա����
	printf("���ۼۣ�%dԪ\n", information.price);
	printf("������%dg\n", information.weight);
	printf("��ζ���ࣺ\n");
	printf("��ζ1��%s\n", information.sweet.taste1);//����ṹ��tastes��Ա����
	printf("��ζ2��%s\n", information.sweet.taste2);
	printf("��ζ3��%s\n", information.sweet.taste3);	
	return 0;
}
