#include<stdio.h>                       			/*包含头文件*/

void judgeTemperature(float temperature);			/*声明函数*/
float getTemperature();                   			/*声明函数*/
 
int main()                              			/*主函数main*/
{
		judgeTemperature(getTemperature()); 		/*调用函数*/
		return 0;                           			/*程序结束*/
}
float getTemperature()                    			/*定义体温函数*/
{
		float temperature;                    		/*定义变量*/
		printf("please input a temperature:\n");	/*输出提示信息*/
		scanf("%f",&temperature);               	/*输入体温*/
		printf("当前体温是：%.1f\n",temperature); 	/*输出当前体温值*/
 		return temperature;	                    	/*返回体温值*/		
}
 
void judgeTemperature(float temperature)      		/*自定义体温正常函数*/
{
  	if(temperature<=37.3f&& temperature>=36)   /*判断体温值是否正常*/
     		printf("体温正常\n");
 		else
     		printf("体温不正常\n");
}
