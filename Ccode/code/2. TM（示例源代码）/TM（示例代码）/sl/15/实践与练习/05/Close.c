#include <stdlib.h>
#include<stdio.h>

int main()
{
	int* iIntMalloc=(int*)malloc(sizeof(int));	 
	*iIntMalloc=10240;
	printf("%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-\n");
	printf("  �·���%d��\n",*iIntMalloc);	
	printf("%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-\n");
	return 0;
}