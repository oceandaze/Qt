#include<stdio.h>
int main()
{
	int week;
	float  time;
	printf("请输入星期几、时间：\n");
	scanf("%d %f",&week,&time);
	if (((week==2)&&(time>=10&&time<=12))|| ((week == 5) && (time >= 14 && time <= 16)))
	{
		printf("恭喜你，参加手机的打折活动\n");
	}
	else
	{
		printf("很遗憾，您不能参加手机打折活动\n");
	}
	return 0;
}