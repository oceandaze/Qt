#include<stdio.h>
int main()
{
    int n,sum=0;                                 /*���������n��ʾ��������ݣ�sum��ʾ���*/
	int i,n1,sum1=0;                            /*���������n1��ʾ��������ݣ�sum1��ʾ���*/
	printf("������һ����Ȼ��:");
    scanf("%d",&n1);                              /*��������n1*/
    for(i=n1;i<=100;i++)                             /*ʹ��forѭ��*/
    {     
         sum1=sum1+i;                           /*�����ۼ�*/                             
     }
    printf("���Ϊ��%d\n",sum1);                /*��������*/

	printf("������һ����Ȼ��:");
    scanf("%d",&n);                              /*��������n*/
    while(n<=100)                               /*ʹ��whileѭ��*/
    {     
         sum=sum+n;                           /*�����ۼ�*/ 
		 n++;                                 /*��������*/
     }
     printf("���Ϊ��%d\n",sum);                /*��������*/
    
	 return 0;
}
