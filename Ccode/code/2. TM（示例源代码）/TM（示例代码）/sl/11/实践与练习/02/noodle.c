/**
   �����Ŷӣ����տƼ�
   ����ѧԺ��վ��www.mingrisoft.com
   �����̵��Ʒ������Ϣ
*/
#include<stdio.h>                   		
struct goods                         		//��Ʒ�ṹ��
{
	char cName[20];	                	//��ƷƷ����
	float  price;                   	//���ۼ�

} goods[5] = { { "��ʦ��������",2.5f },          	//�������鲢��ʼ��
{ "ũ��ɽȪ",2.0f },
{ "���׳�",3.0f },
{ "�ɱȿ���Ƭ",3.0f},
{ "��ţ������",2.5f } };
int main()                          		//������main
{
	int i;                          		//ѭ�����Ʊ���
	for (i = 0; i<5; i++)                	//ʹ��for����ѭ��
	{
		printf("\n��%d�ֲ�Ʒ:\n", i + 1);
		//����ṹ�������е�Ԫ������
		printf("������: %s,�����ǣ�%.2fԪ\n", goods[i].cName,goods[i].price);
		printf("\n");		        	//�ո���
	}
	return 0;                       	//�������
}
