#include<stdio.h>

void Move();							/*�������˺���*/
void Build();							/*�������캯��*/
void Paint();							/*������ˢ����*/

int main()
{
	Move();							/*ִ�а��˺���*/
	Build();							/*ִ�н��캯��*/
	Paint();							/*ִ�з�ˢ����*/

	return 0;							/*�������*/
}


void Move()
{
	printf("ִ�а��˹���\n");
}

void Build()
{
	printf("ִ�н��칦��\n");
}

void Paint()
{
	printf("ִ�з�ˢ����\n");
}
