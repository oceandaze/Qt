#include <stdlib.h>						/*包含头文件*/
#include<stdio.h>
#include<string.h>

int main()								/*主函数main*/
{
		char* ch;							/*定义指针*/	 
		ch=(char*)calloc(30,sizeof(char));	/*分配变量*/	 
    	strcpy(ch,"清华大学出版社");				/*将字符串复制*/
    	printf("%s\n",ch);					/*输出字符串*/
    	free(ch);							/*释放空间*/
		return 0;							/*程序结束*/
}
