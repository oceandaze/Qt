#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;
	char i,j;
	char filename[30];							/*定义一个字符型数组*/
	printf("请输入文件路径:\n");
	scanf("%s",filename);						/*输入文件名*/
	if((fp=fopen(filename,"r"))==NULL)				/*判断文件是否打开失败*/
	{
		printf("不能打开文件!\n请按任意键继续\n");
		getchar();
		exit(0);
	}
    for(i=0;i<15;i++)
	{
		fscanf(fp,"%c",&j);
		printf("%d answer is:%5c\n",i+1,j);
	}
	fclose(fp);
	fclose(fp);
	return 0;
}
