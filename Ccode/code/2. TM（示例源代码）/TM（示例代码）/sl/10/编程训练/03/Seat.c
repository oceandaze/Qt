#include<stdio.h>
int main()
{
	int a[5][5],i,j;
	printf("请输入5*5的座位号:\n");
	for(i=0;i<5;i++)								/*控制二维数组的行数*/
		for(j=0;j<5;j++)							/*控制二维数组的列数*/
			scanf("%d",*(a+i)+j);					/*为二维数组中的元素赋值*/								/*p为第一个元素的地址*/
		printf("最受欢迎的座位是:\n");
		for(j=0;j<5;j++)
				printf("%5d",*(*(a+1)+j));				/*输出二维数组中的元素*/
			printf("\n");
            return 0;
}
