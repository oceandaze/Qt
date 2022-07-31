#include<stdio.h>
int main()
{
    int n,sum=0;                                 /*定义变量，n表示输入的数据，sum表示求和*/
	int i,n1,sum1=0;                            /*定义变量，n1表示输入的数据，sum1表示求和*/
	printf("请输入一个自然数:");
    scanf("%d",&n1);                              /*输入数据n1*/
    for(i=n1;i<=100;i++)                             /*使用for循环*/
    {     
         sum1=sum1+i;                           /*进行累加*/                             
     }
    printf("结果为：%d\n",sum1);                /*将结果输出*/

	printf("请输入一个自然数:");
    scanf("%d",&n);                              /*输入数据n*/
    while(n<=100)                               /*使用while循环*/
    {     
         sum=sum+n;                           /*进行累加*/ 
		 n++;                                 /*增加数字*/
     }
     printf("结果为：%d\n",sum);                /*将结果输出*/
    
	 return 0;
}
