#include<stdio.h>
int main()
{
	int day;                                    /*���������day��������fee����������*/
	double fee;
	puts("������������");
	scanf("%d", &day);                               /*��������*/
	fee = (day < 30) ? day : day * 0.75;                   /*������������*/
	printf("���������ǣ�%.2f\n", fee);
	return 0;
}