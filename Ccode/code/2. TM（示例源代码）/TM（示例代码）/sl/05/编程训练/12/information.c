#include<stdio.h>
int main()
{
	int age;
	float height,weight;
	char sex;
	printf("请输入您的性别:");
	scanf("%c",&sex);
	printf("请输入您的年龄:");
	scanf("%d",&age);
	printf("请输入您的身高:");
	scanf("%f",&height);
	printf("请输入您的体重:");
	scanf("%f",&weight);
	
	printf("---您的基本信息----\n");
	printf("性别：%c\n",sex);
	printf("年龄：%d\n",age);
	printf("身高：%.2f\n",height);
	printf("体重：%.2f\n",weight);
	
	return 0;
}