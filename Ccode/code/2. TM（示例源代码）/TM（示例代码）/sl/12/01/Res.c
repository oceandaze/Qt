#include<stdio.h>								/*����ͷ�ļ�*/
void main()									/*������main*/
{
    unsigned result; 						/*�����޷��ű���*/
    int age1, age2; 						/*�������*/
    printf("�������һ��������age1:");			/*��ʾ��������1*/
    scanf("%d",&age1); 						/*��������1*/
    printf("������ڶ���������age2:"); 			/*��ʾ��������2*/
    scanf("%d",&age2); 						/*��������2*/
    printf("age1=%d, age2=%d", age1, age2); /*��ʾ����*/
    result = age1&age2; 					/*����"��"����Ľ��*/
    printf("\nage1&age2=%u\n", result); 	/*���������*/
}
