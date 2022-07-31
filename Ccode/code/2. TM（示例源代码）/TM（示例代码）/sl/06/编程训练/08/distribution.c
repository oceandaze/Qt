#include<stdio.h>
int main()
{
	float jine, ze;
	printf("您共计消费:\n");
	scanf("%f", &jine);
	ze = jine >= 99 ? jine : (jine + 6);
	printf("您实际需要付%.1f元\n", ze);
	return 0;
}