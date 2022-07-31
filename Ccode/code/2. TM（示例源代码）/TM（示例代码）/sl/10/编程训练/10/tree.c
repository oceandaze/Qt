#include<stdio.h>
int *tree(int sum,int exceed);
int p1;


void main()
{
	int sum,exceed;
	int *iResult;
	printf("请输入总共植树的数量：\n");
	scanf("%d",&sum);
	printf("请输入四年级比三年级多植树的数量：\n");
	scanf("%d",&exceed);
	iResult=tree(sum,exceed);
	printf("三年级植树的数量是：");
	printf("%d\n",*iResult);
	printf("四年级植树的数量是：%d\n",128-(*iResult));
}

int *tree(int sum,int exceed)
{
	int *p;
	p=&p1;
	p1=(sum-exceed)/2;
	return p;
}
