#include <stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
	char* ch;	 
	ch=(char*)calloc(30,sizeof(char));	 
    strcpy(ch,"Mingrisoft");
	printf("$-$-$-$-$-$-$-$-$-$\n");
    printf("    %s\n",ch);
	printf("$-$-$-$-$-$-$-$-$-$\n");
    free(ch);
	return 0;
}