#include<stdio.h>
int main()
{
	int wine;
	printf("\nΪ���������˵İ�ȫ���Ͻ��ƺ�ݳ�\n");
	printf("������ÿ100����ѪҺ�ľƾ�������\n");
	scanf("%d",&wine);
	if (wine<20)
	{
		printf("\n����������������Ϊ�����Կ�������Ҫע�ⰲȫ!\n");
	}
	else if (wine>=20&&wine<80)
	{
		printf("\n�Ѿ��ﵽ�ƺ��ʻ��׼���벻Ҫ����\n");
	}
	else
	{
		printf("\n�Ѿ��ﵽ��Ƽ�ʻ��׼��ǧ��Ҫ������\n");
	}
	return 0;
}