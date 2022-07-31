#include<stdio.h>                 				/*包含头文件*/

float getTemperature();	          				/*声明函数*/
int main()                        				/*主函数main*/
{
		getTemperature();               			/*调用函数*/
		return 0;                       			/*程序结束*/
}

float getTemperature()                        		/*自定义温度函数*/
{
	 	float temperature;							/*定义整型变量*/
		printf("please input a temperature:\n");	/*输出提示信息*/
		scanf("%f",&temperature);				  	/*输入一个整型变量*/
  		printf("当前体温是：%.1f\n",temperature); 	/*输出当前温度*/
	 	return temperature;                      	/*返回温度值*/			
}
