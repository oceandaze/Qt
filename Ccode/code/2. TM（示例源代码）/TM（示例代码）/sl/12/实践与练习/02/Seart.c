#include <stdio.h>
int main()
{
	int num1,num2;
	printf("请输入原始密码和加密算子：\n");
	scanf("%d %d",&num1,&num2);
	printf("☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆\n");
    printf("☆   经过加密后的值是:%d     ☆\n", num1 ^ num2);
    printf("☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆\n");
	return 0;
}

