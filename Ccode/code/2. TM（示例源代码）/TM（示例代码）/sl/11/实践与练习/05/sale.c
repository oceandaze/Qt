#include<stdio.h>                   		//����ͷ�ļ�
struct sale                          		//�����ṹ��
{
	char number[20];	                	//����Ʒ����
	char cName[20];                   	//��������
	int num;
} sale[5] = { { "T0001","�ʼǱ�����",2 },          	//�����������ʼ��
{ "T0002","��Ϊ��ҫ6X",10},
{ "T0003","iPad",2 },
{ "T0004","��Ϊ��ҫV9",20 },
{ "T0005","MacBock",5 } };
int main()                          		//������main
{
	int i;                          		//ѭ�����Ʊ���
	printf("5�·ݵ���Ʒ������ϸ���£�\n");
	for (i = 0; i<5; i++)                	//ʹ��for����ѭ��
	{
		printf("��Ʒ���: %s  ��Ʒ���ƣ�%s  ��������: %d̨\n", sale[i].number, sale[i].cName,sale[i].num);//��������е�Ԫ������
		printf("\n");		        	//�ո���
	}
	return 0;                       	//�������
}
