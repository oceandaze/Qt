#include<stdio.h>
#include<process.h>
int main()
{
		FILE *fp; 								/*����һ��ָ��FILE���ͽṹ���ָ�����*/
		int n;
		char ch,filename[50];
		printf("�������ļ�·��:\n");
		scanf("%s",filename);						/*�����ļ�λ��*/ 
		if((fp=fopen(filename,"r"))==NULL) 		/*�ж��Ƿ��ܴ��ļ�*/ 
		{
			printf("���ܴ򿪴��ļ�\n");
			exit(0);
		}
		printf("����Ϊ:");
		ch = fgetc(fp);							/*����һ���ַ�*/
		while (ch != EOF)				
		{
			putchar(ch);								 
			ch = fgetc(fp); 						 
		}
			n=ftell(fp);							/*�������*/
    	if(6==n)									/*�жϳ����Ƿ����6*/
			printf("\n��������ɹ�\n");
    	else
			printf("\n��������ʧ��\n");
		fclose(fp); 								/*�ر��ļ�*/		 
      return 0;
}
