#include "stdio.h"
#define iInput 91
int main()
{
 
 #if iInput>60
      printf("及格了\n");
 #endif
 #if iInput<60
      printf("不及格\n");
 #endif
	 printf("☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆\n");
 	 printf("    当前分数:%d\n",iInput);
	 printf("☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆\n");
  return 0;
}



