#include<stdio.h>				/*包含头文件*/
int main()					/*主函数main*/
{
		int i; 					/*定义循环控制变量*/
		char *month[]=
		{
               "January", 		/*给指针数组中的元素赋初值*/
               "February", 
               "March", 
               "April", 
               "May", 
               "June", 
               "July", 
               "August", 
               "September", 
               "October", 
               "November", 
               "December" 
	};													 
	 	for(i=0;i<12;i++)
			printf("%s\n",month[i]); 	/*输出指针数组中的各元素*/
		return 0;
}
