#include<stdio.h>
void change();
int main()
{
	change();
	return 0;
}
void change()
{
	double USD, RMB;
	printf("��Ҫ�һ�����Ԫ��");
	scanf("%lf",&USD);
	RMB = USD * 6.28;
	printf("\n* * * * * * * * * * * * * * * * *\n");
	printf("*  �һ�������ҽ���ǣ�%.2lf  *\n",RMB);
	printf("* * * * * * * * * * * * * * * * *\n");


}