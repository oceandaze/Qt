/**
   �����Ŷӣ����տƼ�
   ����ѧԺ��վ��www.mingrisoft.com
   ע������ѧԺVIP�˺�
*/
#include <stdio.h>                                         //�����������������
#include <string.h>                                       //����strlen()������

int main()
{
	char text[20];                                          //�����ַ����鱣���˺�
	printf("����������ע�������ѧԺ�˺�:\n");             //�����Ϣ��ʾ
	scanf("%s", &text); 	                                 //����ע����˺�
	if (strlen(text) >= 4 && strlen(text) <= 12)         //�Ƚ��ַ����ĳ��ȣ�Ҫ�󳤶���4-12���ַ�
		printf("ע��ɹ�\n");                              //����ɹ���ʾ
	else
		printf("��������˺Ų�����Ҫ�����������룡\n");   //���ʧ����ʾ
	return 0;                                               //�������
}
