#include<stdio.h>
int main()
{
	int x=30,y=-30;
	x=x>>3; 									/*x右移3位*/
	y=y>>3; 									/*y右移3位*/
	printf("x右移3位，y右移3位的结果:%d,%d\n",x,y);
	x=x>>2; 									/*x右移两位*/
	y=y>>2; 									/*y右移两位*/
	printf("x再右移两位，y再右移两位:%d,%d\n",x,y);
	return 0;
}
