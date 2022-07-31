#include<stdio.h>

int main()
{
	int a=12;
	a+=a*=a/=a-6;
	printf("◇-◇-◇-◇-◇-◇-◇-◇-◇\n");
	printf("   the result is %d\n",a); 						/*将计算结果输出*/
	printf("◇-◇-◇-◇-◇-◇-◇-◇-◇\n");
	return 0;
}
