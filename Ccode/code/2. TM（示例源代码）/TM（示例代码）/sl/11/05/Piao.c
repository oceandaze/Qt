#include<stdio.h>
#include<string.h>


struct Ticket		/*���峵Ʊ�ṹ��*/					 
{
	char cName[20];	/*����*/					 
	int  iNumber;						 
	char S[20];/*�˳�����*/	
    char cAddress[20];/*����*/	
    char c[20];/*����ʱ��*/	
}ticket;							 

int main()
{

	struct Ticket* pStruct;		/*����ṹ�����*/				 
	pStruct=&ticket;	/*ָ��ָ��ṹ�����*/						 

	strcpy(pStruct->cName,"��ΰ");	 /*��ֵ*/
	pStruct->iNumber=285;				 
    strcpy(pStruct->S,"����-����");
    strcpy(pStruct->cAddress,"D71");
    strcpy(pStruct->c,"2021��2��20��09:08��");
	printf("����: %s\n",ticket.cName);/*����ṹ���Ա*/		 
	printf("Ʊ��: %dԪ\n",ticket.iNumber);
	printf("�˳�����: %s\n",ticket.S);
    printf("����: %s\n",ticket.cAddress);
    printf("����ʱ��: %s\n",ticket.c);
	return 0;
}
