#include<stdio.h>                       			/*����ͷ�ļ�*/

void judgeblood(int blood);			/*��������*/
int getblood();                   			/*��������*/
 
int main()                              			/*������main*/
{
		judgeblood(getblood()); 		/*���ú���*/
		return 0;                           		/*�������*/
}
int getblood()                    			/*�������º���*/
{
	    int blood;                    		/*�������*/
		printf("����������ѹ��ֵ:\n");	     /*�����ʾ��Ϣ*/
		scanf("%d",&blood);               	/*��������*/
		printf("��ǰ����ѹ�ǣ�%d\n",blood); 	/*�����ǰ����ֵ*/
 		return blood;	                    	/*��������ֵ*/		
}
 
void judgeblood(int blood)      		/*�Զ���������������*/
{
  	if(blood<=90&& blood>=60)   /*�ж�����ֵ�Ƿ�����*/
     		printf("Ѫѹ����\n");
 		else
     		printf("Ѫѹ������\n");
}
