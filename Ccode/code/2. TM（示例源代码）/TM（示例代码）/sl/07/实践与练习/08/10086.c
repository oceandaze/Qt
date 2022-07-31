#include<stdio.h>
int main()
{
	int num;
	printf("——————10086查询功能——————\n");
	printf("输入1，查询当前余额\n");
	printf("输入2，查询当前剩余流量\n");
	printf("输入3，查询当前剩余通话\n");
	printf("输入0，退出自助查询系统！");
	while (1)
	{
		printf("请输入：\n");
		scanf("%d", &num);
		if (num == 1)
		{
			printf("当前余额为：999元\n");
		}
		else if (num == 2)
		{
			printf("当前剩余流量为：5G\n");
		}
		else if (num == 3)
		{
			printf("当前剩余通话为：189分钟\n");
		}
		else if (num == 0)
		{
			printf("退出自助查询系统！\n");
			break;
		}
		else
		{
			printf("对不起，您输入的有误");
		}
	}
	return 0;
}

