#include<stdio.h>
#include<string.h>
#define CHANGE 1
int main()
{
	int i; 
	char str[20];
	printf("��������Ϣ��\n");
	gets(str);
	printf("����֮�����ϢΪ��\n");
#if CHANGE
	for ( i = 0; i < strlen(str); i++)
	{
		printf("*");
	}
	printf("\n");
#else
	printf("��Ϣ��%s\n",str);
#endif
	return 0;
}