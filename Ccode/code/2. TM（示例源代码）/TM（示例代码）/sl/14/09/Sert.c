#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;
	char ch,filename[50];
	printf("�������ļ�·��:\n");
	scanf("%s",filename);	/*�����ļ���*/						 
	if((fp=fopen(filename,"r"))==NULL) 	/*��ֻ����ʽ�򿪸��ļ�*/			 
	{
		printf("���ܴ��ļ�\n");
		exit(0);
	}
	printf("\n��������:\n");
	ch = fgetc(fp);				
	while (ch != EOF)				
	{
		putchar(ch);/*����ַ�*/							 
		ch = fgetc(fp); /*��ȡfpָ���ļ��е��ַ�*/							 
	}
   
	rewind(fp);/*ָ��ָ���ļ���ͷ*/
	printf("\n���ٴ���������:\n");
	ch = fgetc(fp);			
	while (ch != EOF)					
	{
		putchar(ch); 		/*����ַ�*/							 
		ch = fgetc(fp);			
	}
	printf("\n");
	fclose(fp); 	/*�ر��ļ�*/								 
    return 0;
}
