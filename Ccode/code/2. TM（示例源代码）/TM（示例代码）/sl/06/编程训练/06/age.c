#include<stdio.h>
int main()
{
	int age;
	printf("请输入年龄：\n");
	scanf("%d",&age);
	if (age<13)
	{
		if (age < 2)
		{
			printf("他是婴儿\n");
		}
		else if (age >= 2 && age < 4)
		{
			puts("他正在蹒跚学步");
		}
		else if(age >= 4 && age < 13)
		{
			puts("他是儿童");
		}
	}
	else
	{
		if(age >= 13 && age < 20)
		{
		  printf("他是青少年\n");
		}
		else if (age >= 20 && age < 65)
		{
			printf("他是成年人\n");
		}
		else if (age >= 65)
		{
			printf("他是老年人\n");
		}
	}
		
	return 0;
}