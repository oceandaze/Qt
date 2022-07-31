/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   判断车牌号的归属地
*/
#include<stdio.h>
#include<string.h>
int main()
{
	// 初始化号牌列表
	char *car[3][2]= { { "津","A·12345" },
						{"沪","A·23456" },
						{ "京","A·34567"}
};
	int i,j;
	printf("\n车牌号归属地查询：\n");
	for (i = 0; i < 3; i++)
	{
		for ( j = 0; j < 2; j++)
		{
			if (j == 0)
			{
				printf("\n");
			}
			printf("%s ", car[i][j]);			
		}
		if (strcmp("津", car[i][0]) == 0)
		{
			printf("这个车牌号的归属地是：天津");
		}
		if (strcmp("沪", car[i][0]) == 0)
		{
			printf("这个车牌号的归属地是：上海");
		}
		if (strcmp("京", car[i][0]) == 0)
		{
			printf("这个车牌号的归属地是：北京");
		}
		
		
		

	}
	printf("\n");
	return 0;
}
