#include<stdio.h>
int main()
{
    int n,sum=0;                                 /*���������n��ʾ��������ݣ�sum��ʾ���*/
	printf("������һ����Ȼ��:");
    scanf("%d",&n);                              /*��������n*/
     while(n<=100)/*ʹ��whileѭ��*/
     {     
         sum=sum+n;    /*�����ۼ�*/ 
		 n++;/*��������*/
      }
      printf("���Ϊ��%d\n",sum);/*��������*/
     
      return 0;
}