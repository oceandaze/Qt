#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;
	char filename[30],str[50]; 
	printf("请输入文件路径:\n");
	scanf("%s",filename); 
	if((fp=fopen(filename,"wb"))==NULL) 
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	printf("请输入身份证号:\n");
	getchar();
	gets(str);
	fputs(str,fp);
	fclose(fp);
	if((fp=fopen(filename,"rb"))==NULL) 
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	fseek(fp,-6L,2);
	fgets(str,sizeof(str),fp);
	putchar('\n');
	printf("默认密码为（身份证后6位）:");
	puts(str);
	fclose(fp);
    return 0;
}
