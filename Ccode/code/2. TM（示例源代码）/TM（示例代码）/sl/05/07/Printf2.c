#include<stdio.h>
  	
 int main()
 {
 		long iLong=100000;									/*���峤���ͱ�����Ϊ�丳ֵ*/
 		printf("the Long is %ld\n",iLong);					/*��������ͱ���*/
 	
  		printf("the string is: %sKeJi\n","MingRi");				/*����ַ���*/
 		printf("the string is: %10sKeJi\n"," MingRi");				/*ʹ��10���������*/
 		printf("the string is: %-10sKeJi\n"," MingRi");			/*ʹ��-��ʾ����£*/
 		printf("the string is: %10.3sKeJi\n"," MingRi");			/*ʹ��3��ʾȡ�ַ���*/
 		printf("the string is: %-10.3sKeJi\n"," MingRi");	
 		return 0;
 }
