#include<stdio.h>                           		/*����ͷ�ļ�*/

/*�����������������м���*/
void Ohm(float voltage, float electric);

int main()
{
		Ohm(5,10);							/*���ú���*/
		return 0;				                	/*�������*/
}

void Ohm(float voltage, float electric)			/*���庯��*/
{
		float resistance;		                	/*�������ͱ���*/
		resistance=voltage/electric;                	/*���м��㣬���������ֵ��iTempResult*/
  	printf("����ֵ��%f\n",resistance);    	 	/*��ʾ�������ֵ*/	
}
