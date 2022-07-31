#include<stdio.h>
#define MUL(a,b) ((a)*(b))						/*宏定义求两个数的混合运算*/
int main()
{
	int x,y;
	printf("请输入两个数:\n");
	scanf("%d %d",&x,&y);
	printf("乘积结果为:%d\n",MUL(x,y)); 				/*宏定义调用*/
	return 0;
}
