#include<stdio.h>
#include<string.h>
void main (int argc, char* argv[]) 
{
  if(argc<=1) 
  {
    printf("����������!\n");
    scanf("%s",&argc);
    return;
  }
  else 
  {
    const char * password = argv[1];
    if(0 == strcmp(password , "123"))
    {
      printf("��ʼִ��\n");// ��ȷ
    }
    else 
    {
       printf("����Ȩ���޷����д˳���\n");// ����
    }
  }
}
