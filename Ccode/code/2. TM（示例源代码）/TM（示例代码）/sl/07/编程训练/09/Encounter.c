#include<stdio.h>

int main()
{
	int iCount;                          //ѭ�����Ʊ���
	for (iCount = 1; iCount <= 20; iCount++)//Ľ����������20����
	{
		if (iCount == 10)	//�ܵ�10����ʱ��������Ů
		{
			printf("������Ů�ˣ���Ҫ����Լ��\n");//���Ľ����������
			break;	//����ѭ��
		}
		printf("�Ѿ�����%d����\n", iCount);//������˶��
	}
	return 0;//�������
}