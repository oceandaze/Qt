#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;/*定义一个指向FILE类型结构体的指针变量*/
    int i=1;
    int j=2;
	char filename[30]; 	/*定义一个字符型数组*/
	printf("请输入保存文件路径:\n");/*输入文件名*/
	scanf("%s",filename); 
	if((fp=fopen(filename,"w"))==NULL) /*判断文件是否打开失败*/
	{
		printf("不能打开文件!\n请按任意键结束\n");
		getchar();
		exit(0);
	}
	fprintf(fp,"%4d\n",i);/*写入fp所指的磁盘文件中*/
    fprintf(fp,"%2d",i);
    fprintf(fp,"%4d\n",i);
    fprintf(fp,"%d",i);
    fprintf(fp,"%3d",j);
    fprintf(fp,"%4d\n",i);
	fclose(fp);
    return 0;
}
