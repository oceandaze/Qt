#include<stdio.h>                       /*����ͷ�ļ�*/

void judgeheart(int heartRate);	/*��������*/
int heart();                   /*��������*/
 
int main()                              /*������main*/
{
	judgeheart(heart()); /*���ú���*/
	return 0;                           /*�������*/
}
int heart()                    /*�������º���*/
{
	int heartRate;                    /*�������ͱ���*/
	printf("������ÿ����������:\n");/*�����ʾ��Ϣ*/
	scanf("%d",&heartRate);               /*��������*/
	printf("��ǰ�������ǣ�%d\n",heartRate); /*�����ǰ����ֵ*/
 	return heartRate;	                    /*��������ֵ*/		
}
 
void judgeheart(int heartRate)      /*�Զ���������������*/
{
    
 if(heartRate<=100&& heartRate>=60)   /*�ж�����ֵ�Ƿ�����*/
 {
	 printf("�����������������\n");
     printf("     ��������\n");
	 printf("�����������������\n");
 }
 else
 {
	 printf("�� �� �� �� �� ��\n");
     printf("   ����������\n");
	 printf("�� �� �� �� �� ��\n");
 }
}
 
 
 

 
 