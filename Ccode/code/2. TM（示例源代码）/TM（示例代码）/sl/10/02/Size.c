#include<stdio.h>
int main()
{
   
    int a=10,b=11;                      	/*�����������ͱ�������ʼ��*/
    int *ipointer1,*ipointer2;				/*������������ָ�����*/
    ipointer1 = &a;	                       /*����ַ����ָ�����*/			
    ipointer2=&b;
     if(a>b)                               /*�Ƚϴ�С*/
        printf("a��ֵ��\n");
    else
        printf("b��ֵ��\n");
    
    return 0;

}