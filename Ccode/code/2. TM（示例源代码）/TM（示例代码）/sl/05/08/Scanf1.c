#include <stdio.h>
int main()
{
    float height,weight;/*����heightΪ��ߣ�weightΪ����*/
	double BMI;     /*��������ָ��*/  
    printf("��������ߡ����أ�");/*��ʾ��Ϣ*/
    scanf("%f %f",&height,&weight);/*������ߡ�����*/
    BMI=weight/(height*height);/*����BMIֵ*/
    printf("������������ָ����BMI��:%f\n",BMI);/*���ָ��*/
    return 0;/*�������*/
}