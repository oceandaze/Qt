#include<stdio.h>


void  IT();				//��������
void  Internet();
void  program();
void  Clanguage();

int main()
{
	IT();					//����IT�����ú���
	return 0;
}

void  IT()
{
	//�����Ϣ����ʾ����IT����������Ӧ�Ĳ���
	printf("��1���ҵ�IT����\n");
	Internet();              //����Intenet�Ĺ��ܺ���
}

void  Internet()
{
	//�����Ϣ����ʾ����Intenet����������Ӧ�Ĳ���
	printf("��2��IT�������ҵ�����������\n");
	program();         //����program�����ú���
}

void  program()
{
	//�����Ϣ����ʾ����program����������Ӧ�Ĳ���
	printf("��3���������������ҵ�������Է���\n");
	Clanguage();//����Clanguage�����ú���
}

void Clanguage()
{
	//�����Ϣ����ʾ����Clanguage����������Ӧ�Ĳ���
	printf("��4��������Է����ҵ�C���Կγ�\n");
}