#include<stdio.h>
int main()
{
	int age;
	printf("���������䣺\n");
	scanf("%d",&age);
	if (age<13)
	{
		if (age < 2)
		{
			printf("����Ӥ��\n");
		}
		else if (age >= 2 && age < 4)
		{
			puts("����������ѧ��");
		}
		else if(age >= 4 && age < 13)
		{
			puts("���Ƕ�ͯ");
		}
	}
	else
	{
		if(age >= 13 && age < 20)
		{
		  printf("����������\n");
		}
		else if (age >= 20 && age < 65)
		{
			printf("���ǳ�����\n");
		}
		else if (age >= 65)
		{
			printf("����������\n");
		}
	}
		
	return 0;
}