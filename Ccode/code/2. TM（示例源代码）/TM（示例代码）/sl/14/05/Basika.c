#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;/*����һ��ָ��FILE���ͽṹ���ָ�����*/
    int i=1;
    int j=2;
	char filename[30]; 	/*����һ���ַ�������*/
	printf("�����뱣���ļ�·��:\n");/*�����ļ���*/
	scanf("%s",filename); 
	if((fp=fopen(filename,"w"))==NULL) /*�ж��ļ��Ƿ��ʧ��*/
	{
		printf("���ܴ��ļ�!\n�밴���������\n");
		getchar();
		exit(0);
	}
	fprintf(fp,"%4d\n",i);/*д��fp��ָ�Ĵ����ļ���*/
    fprintf(fp,"%2d",i);
    fprintf(fp,"%4d\n",i);
    fprintf(fp,"%d",i);
    fprintf(fp,"%3d",j);
    fprintf(fp,"%4d\n",i);
	fclose(fp);
    return 0;
}
