/**
   �����Ŷӣ����տƼ�
   ����ѧԺ��վ��www.mingrisoft.com
   �����ڴ�
*/
#include <stdlib.h>
#include<stdio.h>

int main()
{
	int* iIntMalloc;
	iIntMalloc = (int*)malloc(sizeof(int));
	*iIntMalloc = 91000;
	printf("�֡֡֡֡֡֡֡֡֡֡֡�\n ");
	printf("    ������%d��\n", *iIntMalloc);
	printf("�֡֡֡֡֡֡֡֡֡֡֡�\n ");
	return 0;
}