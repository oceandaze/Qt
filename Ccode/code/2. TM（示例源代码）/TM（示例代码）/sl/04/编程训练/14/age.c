#include<stdio.h>	                            		/*����ͷ�ļ�*/
int main()                                      		/*������main*/
{
		int a;                                 		/*�������a��������*/
		printf("����������ֵ��\n");
		scanf("%d",&a);									
    	a+=a*=a/=a-5;           
		printf("����� %d\n",a); 	    	
		return 0;                                   		/*�������*/
}
