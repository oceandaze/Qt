#include <stdio.h>
int *per(int a, int b);
int result;
void main()
{
	int x, y, *iResult;
	printf("������ͽ�ܱ�ʦ��������ֵ:\n");
	scanf("%d", &x);
	printf("������ͽ�������������ֵ:\n");
	scanf("%d", &y);
	iResult = per(x, y);
	printf("�������������:");
	printf("%d\n", *iResult);
}

int *per(int a, int b)
{
	int* p;
	p = &result;
	result = a + b;
	return  p;
}
