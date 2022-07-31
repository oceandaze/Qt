/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com

*/
#include<stdio.h>

int main()
{
    int no1,no2,no3,result;
	printf("请输入3个数，实现连加\n");
	scanf("%d%d%d",&no1,&no2,&no3);
	result=no1+no2+no3;
	printf("三个数的和为：%d\n", result);
	return 0;
}