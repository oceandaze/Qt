#include<stdio.h>

int main()
{
	extern a;
	extern b;
	extern max(X,Y);
	int MAX=0;
	MAX=max(a,b);
	printf("%d %d\n",a,b);
	printf("%d",MAX);
	return 0;
}