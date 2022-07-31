#include<stdio.h>                       			/*包含头文件*/

void judgeblood(int blood);			/*声明函数*/
int getblood();                   			/*声明函数*/
 
int main()                              			/*主函数main*/
{
		judgeblood(getblood()); 		/*调用函数*/
		return 0;                           		/*程序结束*/
}
int getblood()                    			/*定义体温函数*/
{
	    int blood;                    		/*定义变量*/
		printf("请输入舒张压数值:\n");	     /*输出提示信息*/
		scanf("%d",&blood);               	/*输入体温*/
		printf("当前舒张压是：%d\n",blood); 	/*输出当前体温值*/
 		return blood;	                    	/*返回体温值*/		
}
 
void judgeblood(int blood)      		/*自定义体温正常函数*/
{
  	if(blood<=90&& blood>=60)   /*判断体温值是否正常*/
     		printf("血压正常\n");
 		else
     		printf("血压不正常\n");
}
