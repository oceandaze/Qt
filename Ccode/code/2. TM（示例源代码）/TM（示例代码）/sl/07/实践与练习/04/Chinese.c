/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   银行中英文对照
*/
#include<stdio.h>
int main()
{
	int i;
	printf("1 对应银行为： ICBI\n");
	printf("2 对应银行为： ABC\n");
	printf("3 对应银行为： CCB\n");
	printf("4 对应银行为： BOC\n");
	printf("5 对应银行为： CMB\n");
	printf("6 对应银行为： CEB\n");
	printf("7 对应银行为： CMBC\n");
	printf("8 对应银行为： CIB\n");
	printf("9 对应银行为： BCM\n");
	printf("---------银行全称查询系统---------\n");
	do {
		printf("请输入要查询的数据：\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			printf("1 对应银行为： 中国工商银行 \n");
			break;
		case 2:
			printf("2 对应银行为： 中国农业银行 \n");
			break;
		case 3:
			printf("3 对应银行为：中国建设银行 \n");
			break;
		case 4:
			printf("4 对应银行为： 中国银行 \n");
			break;
		case 5:
			printf("5 对应银行为：招商银行 \n");
			break;
		case 6:
			printf("6 对应银行为：中国光大银行 \n");
			break;
		case 7:
			printf("7 对应银行为： 民生银行 \n");
			break;
		case 8:
			printf("8 对应银行为： 兴业银行 \n");
			break;
		case 9:
			printf("9 对应银行为： 中国交通银行 \n");
			break;
		default:
			printf("您的输入有误，请重新输入……\n");
			break;
		}
	} while (1);
	return 0;
}
