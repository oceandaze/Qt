#include <stdio.h>

int main()
{
	/*int a[5]={1,2,3,4,5}; 
	int * ptr=(int*)(&a+1); 
	printf("%d£¬%d",*(a+1),*(ptr-1));
	*/
	int p[8]={11,12,13,14,15,16,17,18},i=0,j=0;
	double a,b;
	int w;
	long c;
	
	while(i++<7)
	{
		if(p[i]%2)
		j+=p[i];

		printf("%d\n",j);
	}
	w=a==b;
	//a=a+b=b++;error
	//w%(int)a+b
	printf("%d",w);

	return 0;
}