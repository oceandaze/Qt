#include<stdio.h>/*����ͷ�ļ�*/
struct People	/*����ṹ��*/								 
{
	char cName[20];		/*����*/					 
	int  iNumber;/*ְλ��*/							 
	char cS[20];/*����*/							 
		
}people={"��ΰ",14,"������"};/*�Խṹ�������ʼ��*/	
		 
int main()
{


	struct  People* pStruct;/*����ṹ������ָ��*/				 
	pStruct=&people;	/*ָ��ָ��ṹ�����*/				 
	printf("-----��Ϣ����-----\n");	 /*��ʾ��Ϣ*/
	printf("����: %s\n",(*pStruct).cName);	/*ʹ��ָ������ṹ���Ա*/		 
	printf("ְ����: %d\n",(*pStruct).iNumber);
	printf("����: %s\n",(*pStruct).cS);
	return 0;/*�������*/
}