#include<stdio.h>
int main()
{
	int i,t,a[10],*p;
	p=&a[0];
	printf("请输入10个元素（用空格隔开）:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\n正序输出结果:\n");
		for(i=0;i<10;i++)
		{
			if(i%5==0)
				printf("\n");
			printf("%5d",*(p+i));
		}
		for(i=0;i<5;i++)
		{
			t=a[i];
			a[i]=a[9-i];
			a[9-i]=t;
		}
		printf("\n倒序输出结果:\n");
		for(i=0;i<10;i++)
		{
			if(i%5==0)
				printf("\n");
			printf("%5d",*(p+i));
		}
			printf("\n");
		return 0;
}
