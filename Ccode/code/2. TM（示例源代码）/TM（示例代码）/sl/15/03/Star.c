#include <stdlib.h>
#include<stdio.h>

int main()
{
    int* iIntMalloc;
    iIntMalloc=(int*)malloc(sizeof(int));	 /*����ռ�*/
	*iIntMalloc=10000;	/*ʹ�øÿռ䱣������*/	 
	printf("�ֳ���%d��\n",*iIntMalloc);	/*�������*/ 
	return 0;
}