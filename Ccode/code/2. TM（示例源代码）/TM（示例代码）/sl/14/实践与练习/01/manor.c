/**
   �����Ŷӣ����տƼ�
   ����ѧԺ��վ��www.mingrisoft.com
   ��ȡ����ׯ԰��̬�ļ�
*/
#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp; 							/*����һ��ָ��FILE���ͽṹ���ָ�����*/
	char filename[30], str[100];			/*���������ַ�������*/
	printf("�������ļ���:\n");
	scanf("%s", filename);					/*�����ļ���*/
	if ((fp = fopen(filename, "r")) == NULL)	/*�ж��ļ��Ƿ��ʧ��*/
	{
		printf("���ܴ�!\n�밴���������\n");
		getchar();
		exit(0);
	}
	fgets(str, sizeof(str), fp);			/*��ȡ�����ļ��е�����*/
	printf("%s", str);
	printf("\n");
	fclose(fp);							/*�ر��ļ�*/
}
