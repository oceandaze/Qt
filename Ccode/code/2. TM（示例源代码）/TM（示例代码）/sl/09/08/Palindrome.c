#include<stdio.h>                 				/*����ͷ�ļ�*/

float getTemperature();	          				/*��������*/
int main()                        				/*������main*/
{
		getTemperature();               			/*���ú���*/
		return 0;                       			/*�������*/
}

float getTemperature()                        		/*�Զ����¶Ⱥ���*/
{
	 	float temperature;							/*�������ͱ���*/
		printf("please input a temperature:\n");	/*�����ʾ��Ϣ*/
		scanf("%f",&temperature);				  	/*����һ�����ͱ���*/
  		printf("��ǰ�����ǣ�%.1f\n",temperature); 	/*�����ǰ�¶�*/
	 	return temperature;                      	/*�����¶�ֵ*/			
}
