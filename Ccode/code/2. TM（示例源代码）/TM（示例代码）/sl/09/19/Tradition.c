#include<stdio.h>
#include<string.h>

int main()
{
	char str1[30],str2[30];
	printf("输入目的字符串：\n");
	gets(str1); 										/*输入目的字符串*/
	printf("输入源字符串：\n");
	gets(str2); 										/*输入源字符串*/

	printf("输出目的字符串：\n");
	puts(str1); 										/*输出目的字符串*/
	printf("输出源字符串：\n");
	puts(str2); 										/*输出源字符串*/
	strcpy(str1,str2); 									/*调用strcpy函数实现字符串复制*/
	printf("调用strcpy函数进行字符串复制：\n");
	printf("复制字符串之后的目的字符串：\n");
	puts(str1); 										/*输出复制后的目的字符串*/

	return 0;											/*程序结束*/
}
