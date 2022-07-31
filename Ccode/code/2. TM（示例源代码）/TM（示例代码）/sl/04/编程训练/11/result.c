#include<stdio.h>
int main()
{
	int y = 3, x = 3, z = 1;
	printf("½á¹ûÎª£º\n%d,%d,%d\n", (++x, y++), z + x + y + 2);
	return 0;
}