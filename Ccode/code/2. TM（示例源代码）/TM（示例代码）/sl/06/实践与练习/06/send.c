#include<stdio.h>
int main()
{
	int food, fee;                               //��������洢�ͷѡ��ܹ�����
	printf("���Ķ����ͷ��ǣ�\n");               //��ʾ��Ϣ
	scanf("%d", &food);                       //����ͷ�
	fee = food >= 15 ? food : (food + 5);    //������Ŀ����������ܹ�����
	printf("���Ķ�������%dԪ����֧��\n", fee);  //����ܹ�����
	return 0;                                    //�������
}
