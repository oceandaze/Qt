/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   模拟“跳一跳”小游戏的加分块
*/
#include<stdio.h>
int main()
{
	int score = 0,num;
	printf("--------------跳一跳-------------\n");
	printf("欢迎回来，请开始游戏……\n");
	
	while (1) 
	{
		printf("请输入（1:中心 2:音乐块 3:微信支付块）：\n");
		scanf("%d",&num);
		if(num == 1)
		{
			score += 2;
			printf("您选择的是中心。\n您的分数为：%d\n",score);
		}
		else if(num == 2)
		{
			score += 30;
			printf("您选择的是音乐块。\n您的分数为：%d\n", score);
		}
		else if (num == 3)
		{
			score += 10;
			printf("您选择的是微信支付块。\n您的分数为：%d\n", score);
		}
			
		else
		{
			printf("对不起，您输入的有误\n");
			break;
		}
	}

	return 0;
}
