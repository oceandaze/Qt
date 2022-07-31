/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   挑战10秒，买多少送多少
*/
#include<stdio.h>

#include<stdlib.h>

int  main()
{
	int r1,r2,r3,r4;
	srand(time(NULL));
	r1 = rand() % 2;
	r2 = rand() % 9;
	r3 = rand() % 6;
	r4 = rand() % 9;
	printf("              -----------------\n");
	printf("              |    %d %d:%d %d    |\n",r1,r2,r3,r4);
	printf("              -----------------\n");
	printf("                 挑战");

	printf("10");
	
	printf("秒\n");
	printf("\n                    ◎   \n");

	printf("\n                  买多少\n");
	printf("                  送多少\n");

	printf("-------------------------------------------\n");
	printf("|         凭当日购物小票参与活动          |\n");
	printf("|                                         |\n");
	printf("|    消费30-50元按1次                     |\n");
	printf("|                                         |\n");
	printf("|    消费50元以上按2次（每人最多按2次）   |\n");
	printf("|                                         |\n");
	printf("|    成功锁定 ");

	printf("10:00");
	
	printf(" 买多少送多少          |\n");
	printf("|      （再送小票等额商品）               |\n");
	printf("|                                         |\n");
	printf("|    锁定");

	printf(" 10:0");

	printf("0 赠10元免单劵              |\n");
	printf("|      （消费抵现,限购正价商品）          |\n");
	printf("|                                         |\n");
	printf("|    锁定");

	printf(" 10:");

	printf("00 赠20元消费劵              |\n");
	printf("|      （消费50元抵现20元）               |\n");
	printf("|                                         |\n");
	
	printf("|      ");

	printf(" 活动赠送商品不退不换           ");

	printf("   |\n");
	printf("-------------------------------------------\n");
	return 0;

}
