#include<stdio.h>	
#define BASE 0.33
double exchange(double chea);
int main()									
{
	double m_chea;														
	double result;								
	printf("������ߴ�:\n");					
	scanf("%lf", &m_chea);						
	result = exchange(m_chea);
	printf("����ת�������ǣ�");				
	printf("%.2lf\n", result);
	return 0;								
}
double exchange(double chea)
{
	double result = chea *  BASE;
	return result;							
}
