#include<stdio.h>

int main()
{
	int iNumber1=3;							/*�����������ֵΪ3*/
	int iNumber2=3;

	int iResultPreA,iResultLastA;					/*�����������õ���������Ľ��*/
	int iResultPreD,iResultLastD;					/*�����������õ��Լ�����Ľ��*/

	iResultPreA=++iNumber1;						/*ǰ׺��������*/
	iResultLastA=iNumber2++;					/*��׺��������*/

	printf("The Addself ...\n");
	printf("the iNumber1 is :%d\n",iNumber1);			/*��ʾ����������������ֵ*/
	printf("the iResultPreA is :%d\n",iResultPreA);		/*�õ��������ʽ�еĽ��*/
	printf("the iNumber2 is :%d\n",iNumber2);			/*��ʾ����������������ֵ*/
	printf("the iResultLastA is :%d\n",iResultLastA);		/*�õ��������ʽ�еĽ��*/

	iNumber1=3;								/*�ָ�������ֵΪ3*/
	iNumber2=3;

	iResultPreD=--iNumber1;						/*ǰ׺�Լ�����*/
	iResultLastD=iNumber2--;						/*��׺�Լ�����*/

	printf("The Deleteself ...\n");
	printf("the iNumber1 is :%d\n",iNumber1);			/*��ʾ�Լ�������������ֵ*/
	printf("the iResultPreD is :%d\n",iResultPreD);		/*�õ��Լ����ʽ�еĽ��*/
	printf("the iNumber2 is :%d\n",iNumber2);			/*��ʾ�Լ�������������ֵ*/
	printf("the iResultLastD is :%d\n",iResultLastD)	;	/*�õ��Լ����ʽ�еĽ��*/

	return 0;									/*�������*/
}
