#include<stdio.h>
int main()
{
	int air;
	printf("请输入您所在城市的空气质量指数：\n");
	scanf("%d",&air);
	if (air>=0&&air<=50)
	{
		printf("您所在的空气质量为：优秀\n");
		printf("→*→*→*→*→*→*→*→*→*→*→*\n");
		printf("可多参加户外活动，呼吸新鲜空气！\n");
	}
	else if (air >= 51 && air <= 100)
	{
		printf("您所在的空气质量为：良好\n");
		printf("→*→*→*→*→*→*→*→*→*→*→*\n");
		printf("除少数对某些污染物特别容易过敏的人群外，其他人群可以正常进行室外活动！\n");
	}
	else if (air >= 101 && air <= 150)
	{
		printf("您所在的空气质量为：轻度污染\n");
		printf("→*→*→*→*→*→*→*→*→*→*→*\n");
		printf("敏感人群需减少体力消耗较大的户外活动！\n");
	}
	else if (air >= 151 && air <= 200)
	{
		printf("您所在的空气质量为：中度污染\n");
		printf("→*→*→*→*→*→*→*→*→*→*→*\n");
		printf("敏感人群应尽量减少外出，一般人群适当减少户外活动！\n");
	}
	else if (air >= 201 && air <= 300)
	{
		printf("您所在的空气质量为：重度污染\n");
		printf("→*→*→*→*→*→*→*→*→*→*→*\n");
		printf("敏感人群应停止户外活动，一般人群尽量减少户外活动！\n");
	}
	else if (air >300)
	{
		printf("您所在的空气质量为：严重污染\n");
		printf("→*→*→*→*→*→*→*→*→*→*→*\n");
		printf("除由特殊需要的人群外，尽量不要留在室外！\n");
	}
	else
	{
		printf("输入有误，退出系统");
	}
	return 0;
}