/**
   �����Ŷӣ����տƼ�
   ����ѧԺ��վ��www.mingrisoft.com
   ��������
*/
#include<stdio.h>
int  main()
{
	int pay;
	printf("����֧����������֧����ʽ��\n");
	printf("1������֧��\n");
	printf("2�����п�֧��\n");
	printf("3���ֽ�֧��\n");
	printf("����������ѡ��֧����ʽ\n");
	printf("^-^ ^-^ ^-^ ^-^ ^-^ ^-^ ^-^\n");
	scanf("%d", &pay);
	if (pay == 1) {
		printf("����΢�Ż�֧����ɨ���Ӧ��ά�������֧��\n");
	}
	else if (pay == 2)
	{
		printf("�����Ҳ࿨�۲������п�\n");
	}
	else if (pay == 3)
	{
		printf("�����·���Ʊ��ڷ���ֽ�ң������ŷ���ֽ�ң�\n");
	}
	else
	{
		printf("*-* *-* *-* *-* *-* *-* *-*\n");
		printf("���벻��ȷ��3����˳�֧��\n");

	}
	return 0;
}


