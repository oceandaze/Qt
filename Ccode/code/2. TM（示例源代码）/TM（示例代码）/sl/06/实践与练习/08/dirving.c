#include<stdio.h>
int main()
{
	int wine;
	printf("\n为了您和他人的安全，严禁酒后驾车\n");
	printf("请输入每100毫升血液的酒精含量：\n");
	scanf("%d",&wine);
	if (wine<20)
	{
		printf("\n您还不构成饮酒行为，可以开车，但要注意安全!\n");
	}
	else if (wine>=20&&wine<80)
	{
		printf("\n已经达到酒后驾驶标准，请不要开车\n");
	}
	else
	{
		printf("\n已经达到醉酒驾驶标准，千万不要开车！\n");
	}
	return 0;
}