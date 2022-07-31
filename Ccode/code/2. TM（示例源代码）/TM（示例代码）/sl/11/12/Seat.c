#include "stdio.h"
#include <string.h>


  /*声明公交车结构体类型*/ 
  struct bus 
  {
    char name[64];
  };

  /* 声明地铁结构体类型*/
  struct subway 
  {
    char name[64];
  };

  /*声明共用体类型*/
  union Transportation 
  {
   struct bus p;
   struct subway c;
  };
int main()
{
 union Transportation t;/*定义一个共用体*/
  strcpy(t.p.name, "地铁");/*将相应的名字复制给相应的变量*/
  strcpy(t.c.name, "公交车");
  printf("员工选择%s\n",t.p.name);/*输出信息*/
  printf("员工选择%s\n",t.c.name);
  return 0;
}
