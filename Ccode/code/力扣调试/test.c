#include<stdio.h>
typedef struct a
{
	int a;
	char b;
	char c[2];
	short d[2];
	char e[3];
}a;

typedef struct test
{
	int b;
	a c;
	double d;
}test;

typedef struct test2
{
	int a:4;
	int b:16;
	int c:8;
	char d:3;
}test2;
#pragma pack(4);
struct test3
{
	int a;
	int b;
#pragma pack(2);
	char c;
	char d[2];
#pragma pack();

}test3;
int main()
{
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(test));
	printf("%d\n",sizeof(test2));
	printf("%d\n",sizeof(test3));
	return 0;
}