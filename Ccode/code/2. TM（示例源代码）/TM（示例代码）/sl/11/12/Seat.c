#include "stdio.h"
#include <string.h>


  /*�����������ṹ������*/ 
  struct bus 
  {
    char name[64];
  };

  /* ���������ṹ������*/
  struct subway 
  {
    char name[64];
  };

  /*��������������*/
  union Transportation 
  {
   struct bus p;
   struct subway c;
  };
int main()
{
 union Transportation t;/*����һ��������*/
  strcpy(t.p.name, "����");/*����Ӧ�����ָ��Ƹ���Ӧ�ı���*/
  strcpy(t.c.name, "������");
  printf("Ա��ѡ��%s\n",t.p.name);/*�����Ϣ*/
  printf("Ա��ѡ��%s\n",t.c.name);
  return 0;
}
