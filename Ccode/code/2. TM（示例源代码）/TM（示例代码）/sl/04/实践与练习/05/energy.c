/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   模拟支付宝蚂蚁庄园的饲料产生过程
*/
#include<stdio.h>
int main()
{
	int step, frequency,energy;
	printf("请输入在线支付次数、到店支付次数：\n");
	scanf("%d %d",&step,&frequency);
	energy = (step+frequency)*180;
	printf("▼ ▼ ▼ ▼ ▼ ▼ ▼ ▼ ▼ ▼ ▼ ▼ ▼ \n");
	printf("    今天蚂蚁庄园一共产生%dg鸡饲料 \n",energy);
	printf("▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ \n");
	return 0;
}