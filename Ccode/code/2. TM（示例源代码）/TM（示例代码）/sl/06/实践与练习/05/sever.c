/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   自助服务
*/
#include<stdio.h>
int  main()
{
	int pay;
	printf("本店支持以下自助支付方式：\n");
	printf("1、网络支付\n");
	printf("2、银行卡支付\n");
	printf("3、现金支付\n");
	printf("请输入数字选择支付方式\n");
	printf("^-^ ^-^ ^-^ ^-^ ^-^ ^-^ ^-^\n");
	scanf("%d", &pay);
	if (pay == 1) {
		printf("请用微信或支付宝扫描对应二维码以完成支付\n");
	}
	else if (pay == 2)
	{
		printf("请在右侧卡槽插入银行卡\n");
	}
	else if (pay == 3)
	{
		printf("请在下方钞票入口放入纸币（请逐张放入纸币）\n");
	}
	else
	{
		printf("*-* *-* *-* *-* *-* *-* *-*\n");
		printf("输入不正确，3秒后将退出支付\n");

	}
	return 0;
}


