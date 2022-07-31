#include "stdio.h"
#include <stdlib.h>
int main()
{
  int len = 0;
  char * buf = 0;
  int i;
printf("请用户输入：");
  while(1) {
    char c;
	
   scanf("%c",&c);
    if(c == 'q'){
      for(i=0; i<len-1; i++) {
        printf(" 第%d个字母是%c\n",i,buf[i]);
        
      }
      break;
    }
    else {
      char *tmp ;
      tmp=(char*)malloc(sizeof(char));
      // 拷贝原来的字符过来
      for(i=0; i<len; ++i) {
        tmp[i] = buf[i];
      }
      // 新输入的字符
      tmp[len] = c;
      // 指向这个变量
      buf = tmp;
      // 总数加1
      len ++;
    }
  }
  return 0;
}
