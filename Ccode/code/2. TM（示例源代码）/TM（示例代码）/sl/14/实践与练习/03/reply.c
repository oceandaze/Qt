/**
   �����Ŷӣ����տƼ�
   ����ѧԺ��վ��www.mingrisoft.com
   ģ���Ա��ͷ��Զ��ظ�
*/
#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp1, *fp2; 						/*����һ��ָ��FILE���ͽṹ���ָ�����*/
	char ch, filename1[30], filename2[30];	/*�����ַ��������*/
	printf("����������ҽ�̸�ļ�����\n");
	scanf("%s", filename1);				
	printf("������ͷ��Զ��ظ������ļ�����\n");
	scanf("%s", filename2); 				
	if ((fp1 = fopen(filename1, "ab+")) == NULL)
	{
		printf("���ܴ򿪣��밴���������\n");
		getchar();
		exit(0);
	}
	if ((fp2 = fopen(filename2, "rb")) == NULL) 
	{
		printf("���ܴ򿪣��밴���������\n");
		getchar();
		exit(0);
	}
	fseek(fp1, 0L, 2);
	while ((ch = fgetc(fp2)) != EOF)
	{
		fputc(ch, fp1);
	}
	fclose(fp1);							
	fclose(fp2);
}
