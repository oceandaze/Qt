#include<stdio.h>
void main()
{
    unsigned result; 									/*定义无符号变量*/
    int weight1, weight2;
    printf("请输入第一个人体重:");
    scanf("%d",&weight1);
    printf("请输入第二个人体重:");
    scanf("%d",&weight2);
	printf("-*-*-*-*-*-*-*-*-*-*-*-*-\n");
    printf("  weight1=%d,weight2=%d\n", weight1, weight2);
	printf("-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
    result = weight1&weight2; 										/*计算与运算的结果*/
	printf("@*@*@*@*@*@*@*@*@*@*@*@*\n");
    printf("   weight1&weight2=%u\n", result);
	printf("@*@*@*@*@*@*@*@*@*@*@*@*\n");
}
