#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;
	char i,j;
	char filename[30];							/*����һ���ַ�������*/
	printf("�������ļ�·��:\n");
	scanf("%s",filename);						/*�����ļ���*/
	if((fp=fopen(filename,"r"))==NULL)				/*�ж��ļ��Ƿ��ʧ��*/
	{
		printf("���ܴ��ļ�!\n�밴���������\n");
		getchar();
		exit(0);
	}
    for(i=0;i<15;i++)
	{
		fscanf(fp,"%c",&j);
		printf("%d answer is:%5c\n",i+1,j);
	}
	fclose(fp);
	fclose(fp);
	return 0;
}
