#include<stdio.h>
int main()
{
	int money;
	printf("请输入中奖金额：");
	scanf("%d",&money);
	if (money>=500)
		printf("我中了%d万，买兰博基尼\n",money);
	else if(money<500 && money>200)
		printf("我中了%d万，买卡宴\n",money);
	else if(money<=200 && money>50)
		printf("我中了%d万，买奔驰\n",money);
	else if(money<=50 && money>0)
		printf("我中了%d万，买奥迪\n",money);
	else
		printf("该吃饭吃饭，该睡觉睡觉\n");
}