#include<stdio.h>                               //ͷ�ļ�
int main()                                      //������
{
	int feet = 94, head = 35, Chicken, Rabbit;           //�ֱ���š�ͷ������������洢��������������
	Chicken = (4 * head - feet) / 2;                                //���㼦������
	Rabbit = (feet - 2 * head) / 2;                                 //�����õ�����
	printf("������%dֻ������%dֻ����!\n", Chicken, Rabbit);        //������
	return 0;                                                         //�������
}
