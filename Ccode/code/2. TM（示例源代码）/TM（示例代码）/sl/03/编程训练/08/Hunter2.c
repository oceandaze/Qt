#include<stdio.h>

int main()
{
	int   iInt1=8;					/*�������ͱ���*/
    int   iInt2=9;
	char  cChar1='s';
	char  cChar2='d';			
	float fFloat1=1.68f;				/*���嵥�����ͱ������ͱ���*/
 
	double result=(fFloat1+cChar1+iInt1-iInt2)*(iInt2+iInt1+cChar2) ;	/*�õ����*/

	printf("���Ϊ��%f\n",result);			/*��ʾ����ֵ*/
	return 0;						/*�������*/
}