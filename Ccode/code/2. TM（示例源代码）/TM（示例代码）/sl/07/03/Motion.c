#include<stdio.h>
int main()
{
    int n,sum=0;                                 /*���������n��ʾ��������ݣ�sum��ʾ���*/
	printf("������һ����Ȼ��:");
    scanf("%d",&n);                              /*��������n*/
      do                          
     {     
         sum=sum+n;                           /*�����ۼ�*/ 
		 n++;                                 /*��������*/
     } while(n<=100) ;/*ʹ��whileѭ��*/
      printf("���Ϊ��%d\n",sum);                /*��������*/
     
      return 0;
}
