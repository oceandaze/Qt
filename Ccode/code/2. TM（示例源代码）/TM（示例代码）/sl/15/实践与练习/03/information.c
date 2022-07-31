/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   申请内存
*/
#include <stdlib.h>
#include<stdio.h>

int main()
{
	int* iIntMalloc;
	iIntMalloc = (int*)malloc(sizeof(int));
	*iIntMalloc = 91000;
	printf("≈≈≈≈≈≈≈≈≈≈≈≈\n ");
	printf("    可容纳%d人\n", *iIntMalloc);
	printf("≈≈≈≈≈≈≈≈≈≈≈≈\n ");
	return 0;
}