#include<stdio.h>

int main()
{
	int a,b,c;
	printf("请输入3个数字：\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("最大值是 a: %d\n",a);
		}
		else
		{
			printf("最大值是 c: %d\n",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("最大值是 b: %d\n",b);
		}
		else
		{
			printf("最大值是: %d\n",c);
		}
	}
	return 0;
}