#include<stdio.h>							/*����ͷ�ļ�*/
void main()								/*������main*/
{
		int *p,*q,a[5],b[5],i; 				/*�������*/
		p=&a[0]; 							/*������Ԫ�ظ���ָ��*/
		q=b;
		printf("please input array a:\n");	/*��ʾ��������a*/
		for(i=0;i<5;i++)						/*��������a*/
			scanf("%d",&a[i]);
		printf("please input array b:\n");	/*��ʾ��������b*/
		for(i=0;i<5;i++)						/*��������b*/
			scanf("%d",&b[i]); 
		printf("array a is:\n");				/*��ʾ�������aԪ��*/
		for(i=0;i<5;i++)
		printf("%5d",*(p+i)); 				/*����ָ���������a�е�Ԫ��*/
		printf("\n");
		printf("array b is:\n");				/*��ʾ�������b*/
		for(i=0;i<5;i++)
			printf("%5d",*(q+i)); 
		printf("\n");						/*����*/
}
