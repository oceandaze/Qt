#include<stdio.h>
int main()
{
	int side1 = 13, side2 = 16;
	printf("三角形的两边长分别为：%d,%d\n", side1, side2);
	printf("第三边的取值范围是：%d<第三边<%d\n", side2- side1, side1+ side2);
	return 0;
}