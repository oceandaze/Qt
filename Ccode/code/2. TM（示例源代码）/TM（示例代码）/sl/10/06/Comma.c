#include<stdio.h>							/*包含头文件*/
void main()								/*主函数main*/
{
		int *p,*q,a[5],b[5],i; 				/*定义变量*/
		p=&a[0]; 							/*将数组元素赋给指针*/
		q=b;
		printf("please input array a:\n");	/*提示输入数组a*/
		for(i=0;i<5;i++)						/*输入数组a*/
			scanf("%d",&a[i]);
		printf("please input array b:\n");	/*提示输入数组b*/
		for(i=0;i<5;i++)						/*输入数组b*/
			scanf("%d",&b[i]); 
		printf("array a is:\n");				/*提示输出数组a元素*/
		for(i=0;i<5;i++)
		printf("%5d",*(p+i)); 				/*利用指针输出数组a中的元素*/
		printf("\n");
		printf("array b is:\n");				/*提示输出数组b*/
		for(i=0;i<5;i++)
			printf("%5d",*(q+i)); 
		printf("\n");						/*换行*/
}
