#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;										/*定义一个指向FILE类型结构体的指针变量*/
    char ch;										/*定义变量为字符型*/
    if((fp = fopen("E:\\exp01.txt", "w")) == NULL)			/*以只写方式打开指定文件*/
    {
        printf("不能打开文件\n");
        exit(0);
    }
	printf("请输入名人名言:\n");
    ch = getchar();									/*getchar函数带回一个字符赋予ch*/
    while(ch != '#')									/*当输入"#"时结束循环*/
    {
        fputc(ch, fp);								/*将读入的字符写到磁盘文件中*/
        ch = getchar();								/*getchar函数继续带回一个字符赋给ch*/
    }
    fclose(fp);										/*关闭文件*/
	return 0;
}
