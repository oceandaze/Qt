#include<stdio.h>
int main()
{
    int num=0;                                /*������������*/
	printf("Ŀǰ�����еĳ˿�������:");
    scanf("%d",&num);                         /*��������*/
     do                                       /*����ѭ��*/
     {
         num++;
         printf("���ܳ��� %d �ˣ�\n",26-num);
                                     
      }while(num<=25);
         printf("��λ�����������ٳ����ˡ�\n");
      return 0;
}