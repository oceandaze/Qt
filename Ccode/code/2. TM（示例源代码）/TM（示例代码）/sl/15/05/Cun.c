#include<stdio.h>
#include <stdlib.h>
int main()
{
		int *iInt;						/*定义整型指针*/	 
		char* cChar;							/*定义实型指针*/		 
		iInt=(int*)malloc(sizeof(int)); 	/*使用malloc为分配整型空间*/
		printf("整型数据内存是：%d\n",sizeof(*iInt));		/*输出空间的大小*/	 
		cChar=realloc(iInt,sizeof(char));	/*使用realloc改变分配空间大小*/	 
		printf("字符数据内存是：%d\n",sizeof(*cChar));			/*输出空间的大小*/	
		return 0;							/*程序结束*/
}
