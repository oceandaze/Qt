#include<stdio.h>
void main()
{
    unsigned result; 									/*�����޷��ű���*/
    int weight1, weight2;
    printf("�������һ��������:");
    scanf("%d",&weight1);
    printf("������ڶ���������:");
    scanf("%d",&weight2);
	printf("-*-*-*-*-*-*-*-*-*-*-*-*-\n");
    printf("  weight1=%d,weight2=%d\n", weight1, weight2);
	printf("-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
    result = weight1&weight2; 										/*����������Ľ��*/
	printf("@*@*@*@*@*@*@*@*@*@*@*@*\n");
    printf("   weight1&weight2=%u\n", result);
	printf("@*@*@*@*@*@*@*@*@*@*@*@*\n");
}
