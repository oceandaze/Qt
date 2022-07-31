/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   申请内存，输出十个0
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
/*结论：calloc分配完空间后将元素初始化*/