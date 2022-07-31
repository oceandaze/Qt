#include<stdio.h>
int main()
{
	int light;
	printf("数字1表示红灯亮，数字2表示黄灯等待\n");
	printf("请输入目前交通灯的状态：\n");
	scanf("%d",&light);
	if (light==1)
	{
		printf("目前交通灯是红灯，请停车\n");
	}
	else if (light == 2)
	{
		printf("目前交通灯是黄灯，请减速慢行，停车等待\n");
	}
	else
	{
		printf("目前交通灯是绿灯，可以通行\n");
	}
	return 0;
}
