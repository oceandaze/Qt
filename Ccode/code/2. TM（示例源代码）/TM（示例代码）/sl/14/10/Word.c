#include<stdio.h>
#include<process.h>
int main()
{
		FILE *fp; 								/*定义一个指向FILE类型结构体的指针变量*/
		int n;
		char ch,filename[50];
		printf("请输入文件路径:\n");
		scanf("%s",filename);						/*输入文件位置*/ 
		if((fp=fopen(filename,"r"))==NULL) 		/*判断是否能打开文件*/ 
		{
			printf("不能打开此文件\n");
			exit(0);
		}
		printf("密码为:");
		ch = fgetc(fp);							/*读出一个字符*/
		while (ch != EOF)				
		{
			putchar(ch);								 
			ch = fgetc(fp); 						 
		}
			n=ftell(fp);							/*输出长度*/
    	if(6==n)									/*判断长度是否等于6*/
			printf("\n设置密码成功\n");
    	else
			printf("\n设置密码失败\n");
		fclose(fp); 								/*关闭文件*/		 
      return 0;
}
