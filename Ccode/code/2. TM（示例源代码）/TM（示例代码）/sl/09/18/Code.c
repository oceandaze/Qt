#include<stdio.h>
#include<ctype.h>

void SwitchShow(char c);

int main()
{
	char cCharPut;							/*�����ַ���������������������ַ�*/
	char cCharTemp;						/*�����ַ��������������ջس���*/


	printf("���һ������һ���ַ�:");						/*��Ϣ��ʾ����һ�������ַ�*/
	scanf( "%c", &cCharPut);					/*�����ַ�*/			
	SwitchShow(cCharPut);					/*���ú��������ж�*/
	cCharTemp=getchar();					/*���ջس���*/

	printf("��ڶ�������һ���ַ�:");					/*��Ϣ��ʾ���ڶ��������ַ�*/
	scanf( "%c", &cCharPut);					/*�����ַ�*/
	SwitchShow(cCharPut);					/*���ú����ж�������ַ�*/
	cCharTemp=getchar();					/*���ջس���*/

	printf("�����������һ���ַ�:");						/*��Ϣ��ʾ����3�������ַ�*/
	scanf( "%c", &cCharPut);					/*�����ַ�*/
	SwitchShow(cCharPut);					/*���ú����ж�������ַ�*/
	
	return 0;								/*�������*/
}

void SwitchShow(char cChar)
{
	if(isalpha(cChar))						/*�ж��Ƿ�Ϊ��ĸ*/
	{
		printf("�����������ĸ %c\n",cChar);
	}

	if(isdigit(cChar))						/*�ж��Ƿ�Ϊ����*/
	{
		printf("������������� %c\n", cChar);
	}
	
	if(isalnum(cChar))						/*�ж��Ƿ�Ϊ��ĸ��������*/
	{
		printf("�����������ĸ�������� %c\n", cChar);
	}

	else									/*���ַ��Ȳ�����ĸҲ��������ʱ*/
	{
		printf("��������ǼȲ�����ĸҲ��������:%c\n", cChar);
	}
}
