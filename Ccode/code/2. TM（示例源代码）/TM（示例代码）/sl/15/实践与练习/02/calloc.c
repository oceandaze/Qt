/**
   �����Ŷӣ����տƼ�
   ����ѧԺ��վ��www.mingrisoft.com
   �����ڴ棬���ʮ��0
*/
#include <stdlib.h>
#include<stdio.h>
int main()
{
	int* pArray;
	int i;
	pArray = (int*)calloc(10, sizeof(int));
	printf("--------\n");
	for (i = 0; i < 10; i++)
		printf("| %3d  |\n", *pArray);
	*pArray += 1;
	printf("---------\n");
	printf("\n");

	free(pArray);
	return 0;
}
/*���ۣ�calloc������ռ��Ԫ�س�ʼ��*/