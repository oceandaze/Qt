#include<stdio.h>
#include<process.h>
void main()
{
		FILE *fp; 							/*定义一个指向FILE类型结构体的指针变量*/
		char filename[30],str[50];			/*定义两个字符型数组*/
		printf("请输入文件路径:\n");
		scanf("%s",filename);					/*输入文件名*/
		if((fp=fopen(filename,"wb"))==NULL)	/*判断文件是否打开失败*/
		{
			printf("can not open!\npress any key to continue\n");
			getchar();
		exit(0);
		}
		printf("请输入出生年月日:\n");
		getchar();
		gets(str);
		fputs(str,fp); 						/*将字符串写入fp所指向的文件中*/
		fclose(fp);
		if((fp=fopen(filename,"rb"))==NULL)	/*判断文件是否打开失败*/
		{
			printf("can not open!\npress any key to continue\n");
			getchar();
			exit(0);
		}
		fseek(fp,4L,0); 					/*移动的位数*/
		fgets(str,sizeof(str),fp);
		putchar('\n');
		puts("生日是：");
		puts(str);
		fclose(fp);						/*关闭文件*/
}
