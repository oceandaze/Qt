#include<stdio.h>

struct date											/*ʱ��ṹ*/
{
		int year;										/*��*/
		int month;										/*��*/
		int day;											/*��*/
};

struct student											/*ѧ����Ϣ�ṹ*/
{
		char name[30];									/*����*/
		int num;											/*ѧ��*/
		char sex;										/*�Ա�*/
		struct date birthday;								/*��������*/
}student={"SuYuQun",25,'W',{1996,12,6}};			/*Ϊ�ṹ������ʼ��*/

int main()
{
		printf("-----������Ϣ����-----\n");
		printf("����: %s\n",student.name);				/*����ṹ��Ա*/
		printf("����: %d\n",student.num);
		printf("�Ա�: %c\n",student.sex);
		printf("����: %d-%d-%d\n",student.birthday.year,student.birthday.month,student.birthday.day);		/*����Ա�ṹ���������*/
		return 0;
}
