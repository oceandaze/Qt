#include <stdio.h>
void _strcopy(char *str1, char *str2);
int main()
{
	char str1[] = "you are beautiful";/*�ַ���1*/
    char str2[] = "";/*�ַ���2*/
    _strcopy(str1, str2);/*���ú���*/
    printf("����֮����ַ���Ϊ��%s\n", str2);/*�������֮����*/
    return 0;
}
void _strcopy(char *str1, char *str2)
{
  
    while(*str1 != '\0')/*�ƶ�ָ��*/
    {
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';/*���ַ�����ĩβ�ӽ�����*/
}
