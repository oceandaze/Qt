#include<stdio.h>

int main()
{
	float Pie = 3.14f;                            /*����Բ����*/
	float fArea;                                     /*�������*/
	float fRadius;
	puts("������뾶:");
	scanf("%f", &fRadius);                              /*����Բ�İ뾶*/
	fArea = 2 * fRadius*Pie;                             /*����Բ���ܳ�*/
	printf("�ܳ���: %.2f\n", fArea);                      /*�������Ľ��*/
	fArea = 4 / 3 * (fRadius*fRadius*fRadius*Pie);	/*����������*/
	printf("�����: %.2f\n", fArea);                  /*�������Ľ��*/
	return 0;                                                /*�������*/
}
