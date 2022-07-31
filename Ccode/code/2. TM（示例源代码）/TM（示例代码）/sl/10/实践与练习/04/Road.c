#include<stdio.h>
int main()
{
	int a=600/(0.75-0.25-0.2);
    int *p;
	printf("----------------------------\n");
	printf("     公路全长是%d米\n",a);
	printf("----------------------------\n");
	p=&a;
	printf("* * * * * * * * * * * * * * *\n");
	printf("    它的地址是:%d\n",&*p); 					/*输出公里数变量的地址*/
	printf("* * * * * * * * * * * * * * *\n");
    return 0;
}
	 
