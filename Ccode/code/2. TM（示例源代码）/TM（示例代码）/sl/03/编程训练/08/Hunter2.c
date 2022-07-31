#include<stdio.h>

int main()
{
	int   iInt1=8;					/*定义整型变量*/
    int   iInt2=9;
	char  cChar1='s';
	char  cChar2='d';			
	float fFloat1=1.68f;				/*定义单精度型变量整型变量*/
 
	double result=(fFloat1+cChar1+iInt1-iInt2)*(iInt2+iInt1+cChar2) ;	/*得到结果*/

	printf("结果为：%f\n",result);			/*显示变量值*/
	return 0;						/*程序结束*/
}