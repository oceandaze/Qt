#include<stdio.h>
#define TEM 399 
int main()
{
	 
    #if TEM==235
	     printf("�d �d �d �d �d\n");
         printf("    �崿��\n");
		 printf("�d �d �d �d �d\n");
    #elif TEM==399 	
	   printf("----------------\n");
       printf("    �������\n");
	   printf("----------------\n");
       #elif TEM==599
	   printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
       printf("  ˫���գ������գ������գ�\n");
	   printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
       #elif TEM==1999 
	   printf("@-@-@-@-@-@-@-@-@\n");
       printf("    ��ɴ��\n");
	   printf("@-@-@-@-@-@-@-@-@\n");
    #else
         printf("û������������\n");			
    #endif
    return 0;
}
