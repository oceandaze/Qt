#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp;
	char i,j;
	char filename[30];/*定义一个字符型数组*/
	printf("请输入文件路径:\n");
	scanf("%s",filename);/*输入文件名*/
	if((fp=fopen(filename,"r"))==NULL)/*判断文件是否打开失败*/
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	for(i=0;i<5;i++)
	{
		fscanf(fp,"%c",&j);
		printf("第%d个是:%5c\n",i+1,j);
	}
	fclose(fp);
}
