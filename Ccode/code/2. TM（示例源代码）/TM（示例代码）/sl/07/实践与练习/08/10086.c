#include<stdio.h>
int main()
{
	int num;
	printf("������������10086��ѯ���ܡ�����������\n");
	printf("����1����ѯ��ǰ���\n");
	printf("����2����ѯ��ǰʣ������\n");
	printf("����3����ѯ��ǰʣ��ͨ��\n");
	printf("����0���˳�������ѯϵͳ��");
	while (1)
	{
		printf("�����룺\n");
		scanf("%d", &num);
		if (num == 1)
		{
			printf("��ǰ���Ϊ��999Ԫ\n");
		}
		else if (num == 2)
		{
			printf("��ǰʣ������Ϊ��5G\n");
		}
		else if (num == 3)
		{
			printf("��ǰʣ��ͨ��Ϊ��189����\n");
		}
		else if (num == 0)
		{
			printf("�˳�������ѯϵͳ��\n");
			break;
		}
		else
		{
			printf("�Բ��������������");
		}
	}
	return 0;
}

