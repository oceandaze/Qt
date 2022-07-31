#include<stdio.h>
int main()
{
    int score;                                             /*定义变量*/
	printf("请输入成绩：");
    scanf("%d",&score);                                   /*输入成绩*/
    if(score>=90)                                         /*成绩是否大于等于90*/
        printf("优秀\n");                                 /*如果为真，输出优秀*/
    else if(score>=80&&score<90)                          /*成绩是否大于等于80且小于90*/                                      
        printf("良好\n");                                 /*如果为真，输出良好*/
    else if(score>=60&&score<80)                                    /*成绩是否大于等于60且小于80*/                                     
        printf("合格\n");                                 /*如果为真，输出合格*/
    else                                                  /*成绩输入其他数值*/  
        printf("不合格\n");                               /*如果为真，输出不合格*/
      return 0;
}