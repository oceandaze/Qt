#include<stdio.h>
int main()
{
	int x=30,y=-30;
	x=x>>3; 									/*x����3λ*/
	y=y>>3; 									/*y����3λ*/
	printf("x����3λ��y����3λ�Ľ��:%d,%d\n",x,y);
	x=x>>2; 									/*x������λ*/
	y=y>>2; 									/*y������λ*/
	printf("x��������λ��y��������λ:%d,%d\n",x,y);
	return 0;
}
