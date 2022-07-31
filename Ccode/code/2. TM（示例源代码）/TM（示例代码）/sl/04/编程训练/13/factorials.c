#include<stdio.h>
int main()
{
	int i, n, sum = 1;
	puts("请输入n的值：");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)    
		sum *= i;   
	printf("%d的阶乘是%d\n",n, sum);
	return 0;
}