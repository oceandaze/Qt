#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;
	char filename[30],str[50]; /*���������ַ�������*/
	printf("�������ļ�·��:\n");
	scanf("%s",filename); /*�����ļ���*/
	if((fp=fopen(filename,"wb"))==NULL) /*�ж��ļ��Ƿ��ʧ��*/
	{
		printf("���ܴ��ļ�!\n�밴���������\n");
		getchar();
		exit(0);
	}
	printf("�������ַ���:\n");
	getchar();
	gets(str);
	fputs(str,fp);
	fclose(fp);
	if((fp=fopen(filename,"rb"))==NULL) /*�ж��ļ��Ƿ��ʧ��*/
	{
		printf("���ܴ��ļ�!\n�밴���������\n");
		getchar();
		exit(0);
	}
	fseek(fp,7L,0);
	fgets(str,sizeof(str),fp);
	printf("\nȡ����Ϊ:\n");
	puts(str);
	fclose(fp);
    return 0;
}
