#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* pInt;								/*����ָ��*/
	pInt=(int*)malloc(sizeof(pInt));				/*�������Ϳռ�*/
	*pInt=100;								/*��ֵ*/
	printf("�����ֵ��:%d\n",*pInt);						/*��ֵ�������*/
	free(pInt);								/*�ͷŸ��ڴ�ռ�*/
	printf("�ͷ����ڴ��ֵ��:%d\n",*pInt);						/*��ֵ�������*/
	return 0;
}
