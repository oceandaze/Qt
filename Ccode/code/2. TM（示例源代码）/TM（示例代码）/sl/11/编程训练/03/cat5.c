#include<stdio.h>
struct Cat                                          //����è�Ľṹ��
{
	char cName[10];                              //����
	int age;	                                     //����
	float weight;                                //����
	char sex[10];                                    //�Ա�
} cat[5] = { {"�ǿ�",1,4.9f,"��"},                 //�������鲢��ʼ��
			   {"С��",1,3.5f,"��"},
			   {"����",1,3.9f,"ĸ"},
			   {"����",1,3.7f,"��"},
			   {"���",1,3.3f,"ĸ"} };

int main()                                       //������main
{
	int i;                                          //ѭ�����Ʊ���
	for (i = 0; i < 5; i++)                         //ʹ��for����ѭ��
	{
		printf("��%dֻ��:\n", i + 1);
		//����ṹ�������е�Ԫ������
		printf("������ %s,���䣺%dԪ,�������أ�%.2f,�����Ա�%s\n", cat[i].cName, cat[i].age, cat[i].weight, cat[i].sex);
		printf("\n");                             //�ո���
	}
	return 0;                                      //�������
}
