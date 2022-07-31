#include<stdio.h>
#include<string.h>
#define CHANGE 1
int main()
{
	int i; 
	char str[20];
	printf("请输入信息：\n");
	gets(str);
	printf("加密之后的消息为：\n");
#if CHANGE
	for ( i = 0; i < strlen(str); i++)
	{
		printf("*");
	}
	printf("\n");
#else
	printf("消息是%s\n",str);
#endif
	return 0;
}