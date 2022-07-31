#include<stdio.h>                                       	/*包含头文件*/
int main()                                              	/*主函数main*/
{
    int jour,fee;                                  		/*定义变量，jour是公里数，fee是所花费用*/
    printf("请输入计程车走的公里数:\n");                  /*计程车走的公里数*/
    scanf("%d",&jour);                                  	/*输入公里数*/
    fee=(jour<3)?6:6+(jour-3)*2;                     	   	/*利用条件运算*/  
    printf("所花的费用是 %d元\n",fee);  		/*输出所花的费用*/
    return 0;                                         		/*程序结束*/
}
