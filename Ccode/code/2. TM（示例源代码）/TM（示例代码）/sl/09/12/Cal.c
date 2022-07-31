#include<stdio.h>

extern void GetAngle(int a,int b,int c);			/*声明外部函数*/
 

int main()
{
	 							     
	 GetAngle(2,3,3);	/*调用函数*/		 
	 return 0;
}
