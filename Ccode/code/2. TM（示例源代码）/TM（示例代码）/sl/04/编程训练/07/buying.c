#include <stdio.h>
int main()
{
	int i;
	printf("请输入口红的价格: \n");
	scanf("%d", &i);
	if (i >= 500)
		printf("OMG，太贵了，买不起！！！\n");
	if (i < 500)
		printf("妈耶，太便宜了，买它~~~~\n");
	return 0;
}