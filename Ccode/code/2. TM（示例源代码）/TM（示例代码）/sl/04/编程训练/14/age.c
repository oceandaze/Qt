#include<stdio.h>	                            		/*包含头文件*/
int main()                                      		/*主函数main*/
{
		int a;                                 		/*定义变量a代表年龄*/
		printf("请输入年龄值：\n");
		scanf("%d",&a);									
    	a+=a*=a/=a-5;           
		printf("结果是 %d\n",a); 	    	
		return 0;                                   		/*程序结束*/
}
