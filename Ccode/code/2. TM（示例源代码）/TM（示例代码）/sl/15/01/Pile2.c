#include <stdlib.h>
#include<stdio.h>

int main()
{
	int *pInt;	/*����ָ��*/	 
	pInt=(int*)malloc(sizeof(int));	 /*�����ڴ�*/

	*pInt=20;/*ʹ�÷����ڴ�*/		 
	printf("���������桷ռ%dG�ռ�\n",*pInt);/*�����Ϣ*/	 
	free(pInt);	/*�ͷ��ڴ�*/	 
	return 0;		
}