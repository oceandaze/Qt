#include<stdio.h>							/*包含头文件*/
void main(int argc,char *argv[])			/*main函数为带参函数*/
{
		printf("the list of parameter:\n");	/*提示*/
		printf("命令名：\n");					/*提示*/
      printf("%s\n",*argv); 				/*输出主函数指针参数*/
		printf("参数个数：\n");				/*提示*/
		printf("%d\n",argc); 					/*输出main函数整型参数*/
}
