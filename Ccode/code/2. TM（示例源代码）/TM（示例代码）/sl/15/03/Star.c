#include <stdlib.h>
#include<stdio.h>

int main()
{
    int* iIntMalloc;
    iIntMalloc=(int*)malloc(sizeof(int));	 /*分配空间*/
	*iIntMalloc=10000;	/*使用该空间保存数据*/	 
	printf("现场有%d人\n",*iIntMalloc);	/*输出数据*/ 
	return 0;
}