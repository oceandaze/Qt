#include<stdio.h>								/*����ͷ�ļ�*/
void main()									/*������main*/
{
    unsigned result; 							/*�����޷��ű���*/
    int a; 									/*�������*/
    printf("please input a:"); 					/*��ʾ����һ����*/
    scanf("%d",&a); 							/*��������*/
    printf("a=%d", a);	 						/*��ʾ���������*/
    result = ~a; 								/*��a�ķ�*/
    printf("\n~a=%o\n", result); 				/*��ʾ���*/
}
