#include <stdlib.h>
#include<stdio.h>

int main()
{
	int *pInt;	/*定义指针*/	 
	pInt=(int*)malloc(sizeof(int));	 /*分配内存*/

	*pInt=20;/*使用分配内存*/		 
	printf("《绝地生存》占%dG空间\n",*pInt);/*输出信息*/	 
	free(pInt);	/*释放内存*/	 
	return 0;		
}