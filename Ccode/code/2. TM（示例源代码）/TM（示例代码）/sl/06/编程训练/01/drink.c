#include<stdio.h>
int main()
{
	int drink;                                                            //������������洢ѡ�������
	printf("����1�����CocaCola������2�����coffee,��ѡ��\n");    //�����ʾ��Ϣ
	scanf("%d", &drink);                                          //����ѡ�������
	if (drink == 1)                                                //�ж�ѡ��������Ƿ����1
	{
		printf("��Ҫ�ȵ���CocaCola\n");                   //���ѡ��Ķ�Ӧ��Ʒ
	}
	if (drink == 2)                                              //�ж�ѡ��������Ƿ����2
	{
		printf("��Ҫ�ȵ���coffee\n");                     //���ѡ��Ķ�Ӧ��Ʒ
	}
	return 0;                                                   //�������
}
