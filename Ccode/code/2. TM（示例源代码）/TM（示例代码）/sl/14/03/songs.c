#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;
	char filename[30],str[30];							/*���������ַ�������*/
	printf("�������ļ�·��:\n");
	scanf("%s",filename);							/*�����ļ���*/
	if((fp=fopen(filename,"w"))==NULL)					/*�ж��ļ��Ƿ��ʧ��*/
	{
		printf("���ܴ��ļ�!\n�밴���������\n");
		getchar();
		exit(0);
	}
	printf("��������:\n");						/*��ʾ�����ַ���*/
	getchar();
	gets(str);
	fputs(str,fp);									/*���ַ���д��fp��ָ����ļ���*/
	fclose(fp);
	return 0;
}
