#include<stdio.h>
struct stu
{
	int id;
	char *name;
	
}

int main1()
{
	FILE *fp;
	FILE *fq;
	//char str[]={"hello world!"};
	char str[100]={"左越"};
	char c=0;
	int n=0;
	int i=0;
	fp=fopen("text.text","r+");
	fq=fopen("text2.text","w+");
	if(fp==NULL)
	{
		printf("文件打开失败");
		return 0;
	}
	//while(fgets(str,20,fp))//如果到达文件末尾或者没有读取到任何字符,返回一个空指针。
	//{
		//printf(str);
	//}
	fputs(str,fq);


	//printf("%p\n",fp);
	/*
	while(str[i]!='\0')
	{
		fputc(str[i],fp);
		i++;
	}
	*/
	 //rewind(fp);
	/*while(!feof(fp))//feof未到末尾返回0，到末尾返回非0；
	{
		
		c=fgetc(fp);
		printf("%c",c);
		fputc(c,fq);
	}
	*/
	fclose(fp);
	fclose(fq);
}




int main()
{
	FILE * p=NULL;
	char str[]="we are in 2021";
	char s[50]={0};
	//int n=0;
	p=fopen("test.text","w+");
	if(p==NULL)
	{
		printf("打开失败");
		exit(0);
	}
	
	fputs(str,p);
	rewind(p);
	fscanf(p,"%s",s);
	
	puts(s);
	return 0;
}