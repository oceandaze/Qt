#include<stdio.h>
int main()
{
	float jine, ze;
	printf("����������:\n");
	scanf("%f", &jine);
	ze = jine >= 99 ? jine : (jine + 6);
	printf("��ʵ����Ҫ��%.1fԪ\n", ze);
	return 0;
}