#include<stdio.h>                           		/*包含头文件*/

/*声明函数，函数进行计算*/
void Ohm(float voltage, float electric);

int main()
{
		Ohm(5,10);							/*调用函数*/
		return 0;				                	/*程序结束*/
}

void Ohm(float voltage, float electric)			/*定义函数*/
{
		float resistance;		                	/*定义整型变量*/
		resistance=voltage/electric;                	/*进行计算，并将结果赋值给iTempResult*/
  	printf("电阻值是%f\n",resistance);    	 	/*显示输出电阻值*/	
}
