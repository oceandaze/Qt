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
	char str[100]={"��Խ"};
	char c=0;
	int n=0;
	int i=0;
	fp=fopen("text.text","r+");
	fq=fopen("text2.text","w+");
	if(fp==NULL)
	{
		printf("�ļ���ʧ��");
		return 0;
	}
	//while(fgets(str,20,fp))//��������ļ�ĩβ����û�ж�ȡ���κ��ַ�,����һ����ָ�롣
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
	/*while(!feof(fp))//feofδ��ĩβ����0����ĩβ���ط�0��
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
		printf("��ʧ��");
		exit(0);
	}
	
	fputs(str,p);
	rewind(p);
	fscanf(p,"%s",s);
	
	puts(s);
	return 0;
}