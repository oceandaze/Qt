#include <stdlib.h>
#include<stdio.h>

int main()
{
	int* iIntMalloc=(int*)malloc(sizeof(int));	 
	*iIntMalloc=10240;
	printf("%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-\n");
	printf("  ÒÂ·þÓÐ%d¼þ\n",*iIntMalloc);	
	printf("%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-\n");
	return 0;
}