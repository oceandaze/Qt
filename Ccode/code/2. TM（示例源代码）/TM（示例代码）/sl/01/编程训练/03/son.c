#include<stdio.h>								/*����ͷ�ļ�*/
#define HEG 0.54								/*���峣��*/
float height(float father,float mother);			/*��������*/
int main()									/*������main*/
{
	float father;							
	float mother;								
	float son;							

	

	printf("�����븸�׵���ߣ�\n");				
	scanf("%f", &father);					

	printf("������ĸ�׵���ߣ�\n");			
	scanf("%f", &mother);						

	son =  height(father,mother);			
	printf("Ԥ����ӵ���ߣ�");			
	printf("%.2f\n", son);				
	return 0;							
}

float height(float father,float mother)			
{
	float son = (father+mother) * HEG;		
	return son;						
}
