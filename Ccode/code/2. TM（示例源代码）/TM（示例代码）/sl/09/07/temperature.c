#include<stdio.h>                       			/*����ͷ�ļ�*/

void judgeTemperature(float temperature);			/*��������*/
float getTemperature();                   			/*��������*/
 
int main()                              			/*������main*/
{
		judgeTemperature(getTemperature()); 		/*���ú���*/
		return 0;                           			/*�������*/
}
float getTemperature()                    			/*�������º���*/
{
		float temperature;                    		/*�������*/
		printf("please input a temperature:\n");	/*�����ʾ��Ϣ*/
		scanf("%f",&temperature);               	/*��������*/
		printf("��ǰ�����ǣ�%.1f\n",temperature); 	/*�����ǰ����ֵ*/
 		return temperature;	                    	/*��������ֵ*/		
}
 
void judgeTemperature(float temperature)      		/*�Զ���������������*/
{
  	if(temperature<=37.3f&& temperature>=36)   /*�ж�����ֵ�Ƿ�����*/
     		printf("��������\n");
 		else
     		printf("���²�����\n");
}
