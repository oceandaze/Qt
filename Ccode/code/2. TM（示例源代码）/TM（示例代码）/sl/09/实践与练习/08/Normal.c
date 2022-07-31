#include<stdio.h>                       /*包含头文件*/

void judgeheart(int heartRate);	/*声明函数*/
int heart();                   /*声明函数*/
 
int main()                              /*主函数main*/
{
	judgeheart(heart()); /*调用函数*/
	return 0;                           /*程序结束*/
}
int heart()                    /*定义体温函数*/
{
	int heartRate;                    /*定义整型变量*/
	printf("请输入每分钟心跳数:\n");/*输出提示信息*/
	scanf("%d",&heartRate);               /*输入体温*/
	printf("当前心跳数是：%d\n",heartRate); /*输出当前体温值*/
 	return heartRate;	                    /*返回体温值*/		
}
 
void judgeheart(int heartRate)      /*自定义体温正常函数*/
{
    
 if(heartRate<=100&& heartRate>=60)   /*判断体温值是否正常*/
 {
	 printf("●→●→●→●→●→●\n");
     printf("     心跳正常\n");
	 printf("●→●→●→●→●→●\n");
 }
 else
 {
	 printf("¤ ¤ ¤ ¤ ¤ ¤\n");
     printf("   心跳不正常\n");
	 printf("¤ ¤ ¤ ¤ ¤ ¤\n");
 }
}
 
 
 

 
 