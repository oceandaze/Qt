/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   下载《明日学院》需要多大内存空间
*/
#include <stdlib.h>
#include<stdio.h>

int main()
{
	double *pInt;
	pInt = (double*)malloc(sizeof(double));

	*pInt = 31.4;
	printf("→*→*→*→*→*→*→*→*→*→*\n");
	printf("  《明日学院》占%.1lfMB空间\n", *pInt);
	printf("→*→*→*→*→*→*→*→*→*→*\n");
	free(pInt);
	return 0;
}