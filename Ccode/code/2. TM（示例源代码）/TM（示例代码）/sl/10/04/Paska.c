#include<stdio.h>
int main()
{
    double a=1000*10*8*0.001;	/*�������������ѹǿ*/
    double *p;	/*����ָ�����*/
	p=&a;	/*����ַ��ֵ��ָ�����*/
    printf("����ѹǿ��ʽ��\n");
	printf("ˮ�Ա��Ӳ���ѹǿ:%.1lf Pa\n",*&a); 					/*����*&���ѹǿ*/
    return 0;
}
	 
