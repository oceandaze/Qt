#include "stdio.h"					/*����ͷ�ļ�*/
#include<string.h>
/*�����ҽṹ��*/
struct peaches 
{
   	 char name[64];
  };
/*����Ҭ�ӽṹ��*/
struct coconut  
{
    char name[64];
  };
/*����ɽ髽ṹ��*/
struct hawthorn 
{
    char name[64];
  };
  /*������ͷ������*/
union tin 
{
  	struct  peaches p;
  	struct  coconut c;
  	struct  hawthorn h;
  };
int main()                  				/*������main*/
{
  	union tin t;              				/*����һ��������*/
  	strcpy(t.p.name, "��");   			/*����Ӧ�����ָ��Ƹ���Ӧ�ı���*/
  	strcpy(t.c.name, "Ҭ��");
  	strcpy(t.h.name, "ɽ�");

 	printf("�����ͷƿװ%s\n",t.p.name);	/*�����Ϣ*/
  
  	return 0;                         		/*�������*/
}
