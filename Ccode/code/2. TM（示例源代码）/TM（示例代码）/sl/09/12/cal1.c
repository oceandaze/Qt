#include<stdio.h>
extern void GetAngle(int a,int b,int c)
{
    float a1=0,b1=0,c1=0;/*���������������ʾ�������ڽ�*/
    a1=(float)180*a/(a+b+c);/*��ÿ���ڽ�*/
    b1=(float)180*b/(a+b+c);
    c1=(float)180*c/(a+b+c);
    printf("�ڽǵĶ����ֱ��ǣ�%.1f,%.1f,%.1f\n",a1,b1,c1);/*����ڽǶ���*/
 
}