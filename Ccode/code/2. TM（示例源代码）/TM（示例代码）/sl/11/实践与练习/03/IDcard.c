/**
   �����Ŷӣ����տƼ�
   ����ѧԺ��վ��www.mingrisoft.com
   ���֤��Ϣ��¶��
*/
#include<stdio.h>

struct card										//���֤�ṹ
{
	char cName[60];								//����
	int birth;									//��������
	char cSex[5];									//�Ա�
	char address[100];									//��ͥסַ
}id[5] = { { "����",19991212,"��","����ʡ������" },//�������鲢���ó�ʼֵ
{ "���",19940505,"Ů","�ӱ�ʡ������" },
{ "�Ŷ�",20001111,"��","ɽ��ʡ������" },
{ "������",19900306,"Ů","����ʡ������" },
{ "ǮСǷ",19920506,"��","����ʡ������" } };

int main()
{
	struct card* pStruct;//����ṹ��ָ�����
	int index;//�����������Ʊ���
	pStruct = id;//ָ��ָ���׵�ַ
	for (index = 0; index<5; index++, pStruct++)//ʹ�ñ���index���±꣬��������е�Ԫ������
	{
		printf("\n��%d ����:\n", index + 1);		//�����ʾ��Ϣ												
		printf("����: %s, ��������: %d\n", pStruct->cName, pStruct->birth);
		printf("�Ա�: %s, ��ַ: %s\n", pStruct->cSex, pStruct->address);
		printf("\n");							//�ո���
	}
	return 0;
}
