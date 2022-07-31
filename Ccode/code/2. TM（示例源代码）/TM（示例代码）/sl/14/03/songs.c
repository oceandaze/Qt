#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;
	char filename[30],str[30];							/*定义两个字符型数组*/
	printf("请输入文件路径:\n");
	scanf("%s",filename);							/*输入文件名*/
	if((fp=fopen(filename,"w"))==NULL)					/*判断文件是否打开失败*/
	{
		printf("不能打开文件!\n请按任意键结束\n");
		getchar();
		exit(0);
	}
	printf("请输入歌词:\n");						/*提示输入字符串*/
	getchar();
	gets(str);
	fputs(str,fp);									/*将字符串写入fp所指向的文件中*/
	fclose(fp);
	return 0;
}
