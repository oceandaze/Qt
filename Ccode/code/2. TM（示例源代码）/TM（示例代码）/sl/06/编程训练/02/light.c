#include<stdio.h>
int main()
{
	int light;
	printf("����1��ʾ�����������2��ʾ�ƵƵȴ�\n");
	printf("������Ŀǰ��ͨ�Ƶ�״̬��\n");
	scanf("%d",&light);
	if (light==1)
	{
		printf("Ŀǰ��ͨ���Ǻ�ƣ���ͣ��\n");
	}
	else if (light == 2)
	{
		printf("Ŀǰ��ͨ���ǻƵƣ���������У�ͣ���ȴ�\n");
	}
	else
	{
		printf("Ŀǰ��ͨ�����̵ƣ�����ͨ��\n");
	}
	return 0;
}
