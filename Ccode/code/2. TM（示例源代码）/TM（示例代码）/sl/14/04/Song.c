#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;
	char filename[30],str[30];					/*���������ַ�������*/
	printf("�������ļ�·��:\n");
	scanf("%s",filename);					/*�����ļ���*/
	if((fp=fopen(filename,"r"))==NULL)			/*�ж��ļ��Ƿ��ʧ��*/
	{
		printf("���ܴ��ļ�!\n�밴���������\n");
		getchar();
		exit(0);
	}
	fgets(str,sizeof(str),fp);					/*��ȡ�����ļ��е�����*/
	printf("%s",str);
	printf("\n");
	fclose(fp);
	return 0;
}
