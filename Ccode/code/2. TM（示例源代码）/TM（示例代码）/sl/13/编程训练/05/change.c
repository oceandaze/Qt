#include<stdio.h>
#define MAX 80
#define CHANGE 1
int main()
{
	char str[MAX];
	int i;
	printf("请输入电报：\n");
	gets(str);
#if(CHANGE)
	{
		for ( i = 0; i < MAX; i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'z')
				str[i] += 1;
			else if (str[i] == 'z' || str[i] == 'Z')
				str[i] -= 25;
		}
	}
#endif
	printf("输出：\n%s\n",str);
	return 0;
}