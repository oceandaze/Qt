#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	// ����Ԥ���б�
	char weathers1[60] = "2021��1��23�� ", weathers2[60] = "��, 20��~7��, ΢��ת����3~4��";
	char weathers3[30] = "08:00  ��", weathers4[30] = "13��  ΢��";
	char weathers5[30] = "12:00  ��", weathers6[30] = "19��  ΢��";
	char weathers7[30] = "16:00  ��", weathers8[30] = "18��  ΢��";
	char weathers9[30] = "20:00  ��", weathers10[30] = "15��  ΢��";
	char weathers11[30] = "00:00  ��", weathers12[30] = "12��  ΢��";
	strcat(weathers1, weathers2);
	strcat(weathers3, weathers4);
	strcat(weathers5, weathers6);
	strcat(weathers7, weathers8);
	strcat(weathers9, weathers10);
	strcat(weathers11, weathers12);
	puts(weathers1);// ѭ������Ԥ���б�
	puts(weathers3);
	puts(weathers5);
	puts(weathers7);
	puts(weathers9);
	puts(weathers11);
	return 0;
}