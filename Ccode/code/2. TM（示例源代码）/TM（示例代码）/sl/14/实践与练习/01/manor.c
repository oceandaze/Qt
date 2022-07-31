/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   读取蚂蚁庄园动态文件
*/
#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp; 							/*定义一个指向FILE类型结构体的指针变量*/
	char filename[30], str[100];			/*定义两个字符型数组*/
	printf("请输入文件名:\n");
	scanf("%s", filename);					/*输入文件名*/
	if ((fp = fopen(filename, "r")) == NULL)	/*判断文件是否打开失败*/
	{
		printf("不能打开!\n请按任意键结束\n");
		getchar();
		exit(0);
	}
	fgets(str, sizeof(str), fp);			/*读取磁盘文件中的内容*/
	printf("%s", str);
	printf("\n");
	fclose(fp);							/*关闭文件*/
}
