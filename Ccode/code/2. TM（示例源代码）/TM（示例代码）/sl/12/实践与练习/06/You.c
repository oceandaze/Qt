#include<stdio.h>
int main()
{
	int x;
	printf(" 请输入x的值：");
	scanf(" %d",&x);
	x=x>>64; 									/*x右移64位*/								
	printf("\n x>>64的值是:%d\n",x);
	x=x>>65; 									/*x右移65位*/
	printf(" x>>65的值是:%d\n",x);
    x=x>>1; 									/*x右移1位*/
	printf(" x>>1的值是:%d\n",x);
    return 0;
}
