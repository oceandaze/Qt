#include<stdio.h>
int main()
{
	int iIndex;								/*ѭ�����Ʊ���*/
    int  length=0;                          /*�������length�����ַ�������*/
	char cArray[80];			            /*�����ַ��������ڱ����ַ���*/
    printf("�������ַ�����\n");/*��ʾ��Ϣ*/
    gets(cArray);/*��gets���������ַ���*/
	for(iIndex=0;cArray[iIndex]!='\0';iIndex++)/*ѭ��ÿ���ַ���ֱ��\0����*/
	{
      	length++; /*�����ۼ�*/
	}
	 printf("�ַ��������ǣ�%d\n",length); 	/*�������*/	 
	return 0;
}
