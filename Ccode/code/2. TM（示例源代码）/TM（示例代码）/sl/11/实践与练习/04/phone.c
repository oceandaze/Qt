#include<stdio.h>

struct telephone											//�����ֻ�������Ϣ�ṹ��
{
	char brandName[20];									//Ʒ����
	int price;										//����
	float screen;//�����ߴ�
	char processor[20];//������
	int battery;										//�������
}telephone1 = { "vivo NEX ˫����",4998,6.39f,"��ͨ ����845",3500 };							//������������ó�ʼֵ
int main()
{	
	printf("��Ʒ����:%s\n", telephone1.brandName);//���ṹ���е�һ���������������Ʒ����
	printf("�ٷ�����:%dԪ\n", telephone1.price);//���ṹ���еڶ���������������ٷ�����
	printf("�����ߴ�:%.2f��\n", telephone1.screen);//���ṹ���е���������������������ߴ�
	printf("CPU�ͺ�:%s\n", telephone1.processor);//���ṹ���е��ĸ������������CPU�ͺ�
	printf("�������:%dmAh\n", telephone1.battery);//���ṹ���е��ĸ�������������������
	return 0;
}
