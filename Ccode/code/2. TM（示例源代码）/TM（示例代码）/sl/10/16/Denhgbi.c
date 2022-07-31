#include<stdio.h>
void SUM(int *p,int n) 							 
{
	int i,sum=0;/*定义变量*/
	for(i=0;i<n;i++)/*循环每个数*/
			sum=sum+*(p+i);/*相加*/
		printf("新生总人数是:%d\n",sum);/*输出*/
}
int main()
{
	int *pointer,a[10],i;/*定义变量*/
	pointer=a; 									 
	printf(" 请输入每个班级人数:\n");/*提示*/	
	for(i=0;i<10;i++)/*输入一周的每天钱数*/
		scanf("%d",&a[i]);
	SUM(pointer,10);  /*调用SUM函数*/
    return 0;
}
