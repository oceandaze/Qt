/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   模拟缴纳电费
*/
#include<stdio.h>
int  main()
{
	int money;
	printf("┌────────────────────────────────────────┐\n");
	printf("│ ●电费账单                             │\n");
	printf("│＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿│\n");
	printf("│ 欠费金额  574元                        │\n");
	printf("│     户名  长春惠鹏石油化工科技有限公   │\n");
	printf("│           司                           │\n");
	printf("│     户号  0140117369                   │\n");
	printf("│     地址  吉林省长春市二道区中意之尊   │\n");
	printf("│           小区4#楼商铺101              │\n");
	printf("│  截止时间  19日04时                    │\n");
	printf("└────────────────────────────────────────┘\n");
	printf("请输入缴费金额（大于574元）：");
	scanf("%d",&money);
	printf("账户电费余额为：%d\n", money - 574);
	return 0;
}
