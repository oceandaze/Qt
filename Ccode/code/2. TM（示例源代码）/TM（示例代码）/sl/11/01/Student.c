#include "stdio.h"/*����ͷ�ļ�*/
#include<string.h>
struct Teacher /*�����ṹ��*/
{
    char name[64]; /* ����*/
    int age;       /* ����*/
    int seniority; /* ����*/
 };

int main()
{
  
    struct Teacher a_teacher;/*����ṹ�����*/
    strcpy(a_teacher.name, "��ʦ");/*���������Ƹ��ṹ�����*/
    a_teacher.age = 35;/*����*/
    a_teacher.seniority = 10;/*����*/
    printf("����:%s\n",a_teacher.name);/*����ṹ�����*/
    printf("����:%d\n",a_teacher.age);
    printf("����:%d\n",a_teacher.seniority);
    return 0;
}
