#include<stdio.h>
#define TEM 399 
int main()
{
	 
    #if TEM==235
	     printf("卍 卍 卍 卍 卍\n");
         printf("    清纯型\n");
		 printf("卍 卍 卍 卍 卍\n");
    #elif TEM==399 	
	   printf("----------------\n");
       printf("    异域风情\n");
	   printf("----------------\n");
       #elif TEM==599
	   printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
       printf("  双人照（姐妹照，情侣照）\n");
	   printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
       #elif TEM==1999 
	   printf("@-@-@-@-@-@-@-@-@\n");
       printf("    婚纱照\n");
	   printf("@-@-@-@-@-@-@-@-@\n");
    #else
         printf("没有这样的类型\n");			
    #endif
    return 0;
}
