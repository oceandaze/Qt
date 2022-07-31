#include <stdio.h>
void _strcopy(char *str1, char *str2);
int main()
{
	char str1[] = "you are beautiful";/*字符串1*/
    char str2[] = "";/*字符串2*/
    _strcopy(str1, str2);/*调用函数*/
    printf("复制之后的字符串为：%s\n", str2);/*输出复制之后结果*/
    return 0;
}
void _strcopy(char *str1, char *str2)
{
  
    while(*str1 != '\0')/*移动指针*/
    {
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';/*在字符串的末尾加结束符*/
}
