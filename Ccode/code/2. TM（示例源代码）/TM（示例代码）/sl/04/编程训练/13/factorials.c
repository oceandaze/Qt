#include<stdio.h>
int main()
{
	int i, n, sum = 1;
	puts("������n��ֵ��");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)    
		sum *= i;   
	printf("%d�Ľ׳���%d\n",n, sum);
	return 0;
}