/**
   �����Ŷӣ����տƼ�
   ����ѧԺ��վ��www.mingrisoft.com
   ���ء�����ѧԺ����Ҫ����ڴ�ռ�
*/
#include <stdlib.h>
#include<stdio.h>

int main()
{
	double *pInt;
	pInt = (double*)malloc(sizeof(double));

	*pInt = 31.4;
	printf("��*��*��*��*��*��*��*��*��*��*\n");
	printf("  ������ѧԺ��ռ%.1lfMB�ռ�\n", *pInt);
	printf("��*��*��*��*��*��*��*��*��*��*\n");
	free(pInt);
	return 0;
}