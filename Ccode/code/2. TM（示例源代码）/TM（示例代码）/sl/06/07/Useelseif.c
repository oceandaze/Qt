#include<stdio.h>
int main()
{
    int score;                                             /*�������*/
	printf("������ɼ���");
    scanf("%d",&score);                                   /*����ɼ�*/
    if(score>=90)                                         /*�ɼ��Ƿ���ڵ���90*/
        printf("����\n");                                 /*���Ϊ�棬�������*/
    else if(score>=80&&score<90)                          /*�ɼ��Ƿ���ڵ���80��С��90*/                                      
        printf("����\n");                                 /*���Ϊ�棬�������*/
    else if(score>=60&&score<80)                                    /*�ɼ��Ƿ���ڵ���60��С��80*/                                     
        printf("�ϸ�\n");                                 /*���Ϊ�棬����ϸ�*/
    else                                                  /*�ɼ�����������ֵ*/  
        printf("���ϸ�\n");                               /*���Ϊ�棬������ϸ�*/
      return 0;
}