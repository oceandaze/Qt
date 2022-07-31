#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;
	char filename[30],str[50]; /*定义两个字符型数组*/
	printf("请输入文件路径:\n");
	scanf("%s",filename); /*输入文件名*/
	if((fp=fopen(filename,"wb"))==NULL) /*判断文件是否打开失败*/
	{
		printf("不能打开文件!\n请按任意键继续\n");
		getchar();
		exit(0);
	}
	printf("请输入字符串:\n");
	getchar();
	gets(str);
	fputs(str,fp);
	fclose(fp);
	if((fp=fopen(filename,"rb"))==NULL) /*判断文件是否打开失败*/
	{
		printf("不能打开文件!\n请按任意键继续\n");
		getchar();
		exit(0);
	}
	fseek(fp,7L,0);
	fgets(str,sizeof(str),fp);
	printf("\n取货号为:\n");
	puts(str);
	fclose(fp);
    return 0;
}
