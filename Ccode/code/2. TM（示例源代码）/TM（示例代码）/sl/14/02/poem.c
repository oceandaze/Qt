#include<stdio.h>
int main()
{
    FILE *fp;										/*����һ��ָ��FILE���ͽṹ���ָ�����*/
    char ch;										/*�������������Ϊ�ַ���*/
    fp = fopen("E:\\poem.txt", "r");						/*��ֻ����ʽ��ָ���ļ�*/
    ch = fgetc(fp);									/*fgetc��������һ���ַ�����ch*/
    while(ch != EOF)								/*��������ַ�ֵ����EOFʱ����ѭ��*/
    {
        putchar(ch);								/*��������ַ��������Ļ��*/
        ch = fgetc(fp);								/*fgetc������������һ���ַ�����ch*/
    }
	printf("\n");
    fclose(fp);										/*�ر��ļ�*/
	return 0;
}
