#include<stdio.h>

void CEO();								/*��������*/
void Manager();
void AssistantManager();
void Clerk();

int main()
{
	CEO();								/*����CEO�Ĺ��ܺ���*/
	return 0;
}

void CEO()
{
			/*�����Ϣ����ʾ����CEO����������Ӧ�Ĳ���*/
	printf("CEO�������ܾ���\n");
	Manager();							/*����Manager�Ĺ��ܺ���*/
}

void Manager()
{
			/*�����Ϣ����ʾ����Manager����������Ӧ�Ĳ���*/
	printf("�ܾ����������ž���\n");
	AssistantManager();						/*����AssistantManager�Ĺ��ܺ���*/
}

void AssistantManager()
{
			/*�����Ϣ����ʾ����AssistantManager����������Ӧ�Ĳ���*/
	printf("���ž��������ܸ���ְԱ\n");
	Clerk();								/*����Clerk�Ĺ��ܺ���*/
}

void Clerk()
{
			/*�����Ϣ����ʾ����Clerk����������Ӧ�Ĳ���*/
	printf("ְԱ��ʼִ��\n");
}
