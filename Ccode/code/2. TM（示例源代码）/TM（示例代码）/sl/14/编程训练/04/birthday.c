#include<stdio.h>
#include<process.h>
void main()
{
		FILE *fp; 							/*����һ��ָ��FILE���ͽṹ���ָ�����*/
		char filename[30],str[50];			/*���������ַ�������*/
		printf("�������ļ�·��:\n");
		scanf("%s",filename);					/*�����ļ���*/
		if((fp=fopen(filename,"wb"))==NULL)	/*�ж��ļ��Ƿ��ʧ��*/
		{
			printf("can not open!\npress any key to continue\n");
			getchar();
		exit(0);
		}
		printf("���������������:\n");
		getchar();
		gets(str);
		fputs(str,fp); 						/*���ַ���д��fp��ָ����ļ���*/
		fclose(fp);
		if((fp=fopen(filename,"rb"))==NULL)	/*�ж��ļ��Ƿ��ʧ��*/
		{
			printf("can not open!\npress any key to continue\n");
			getchar();
			exit(0);
		}
		fseek(fp,4L,0); 					/*�ƶ���λ��*/
		fgets(str,sizeof(str),fp);
		putchar('\n');
		puts("�����ǣ�");
		puts(str);
		fclose(fp);						/*�ر��ļ�*/
}
