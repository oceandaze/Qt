#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;										/*����һ��ָ��FILE���ͽṹ���ָ�����*/
    char ch;										/*�������Ϊ�ַ���*/
    if((fp = fopen("E:\\exp01.txt", "w")) == NULL)			/*��ֻд��ʽ��ָ���ļ�*/
    {
        printf("���ܴ��ļ�\n");
        exit(0);
    }
	printf("��������������:\n");
    ch = getchar();									/*getchar��������һ���ַ�����ch*/
    while(ch != '#')									/*������"#"ʱ����ѭ��*/
    {
        fputc(ch, fp);								/*��������ַ�д�������ļ���*/
        ch = getchar();								/*getchar������������һ���ַ�����ch*/
    }
    fclose(fp);										/*�ر��ļ�*/
	return 0;
}
