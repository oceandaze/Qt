#include<stdio.h>
int main()
{
	int week;
	float  time;
	printf("���������ڼ���ʱ�䣺\n");
	scanf("%d %f",&week,&time);
	if (((week==2)&&(time>=10&&time<=12))|| ((week == 5) && (time >= 14 && time <= 16)))
	{
		printf("��ϲ�㣬�μ��ֻ��Ĵ��ۻ\n");
	}
	else
	{
		printf("���ź��������ܲμ��ֻ����ۻ\n");
	}
	return 0;
}