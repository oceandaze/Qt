/**
   �����Ŷӣ����տƼ�
   ����ѧԺ��վ��www.mingrisoft.com
   ˭��@��
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30] = "���տƼ�", str2[30] = "���˲���", str3[30] = "�ȶ��Ǵ�", str4[10] = "  �㱻@��";
	strcat(str1,str4);
	strcat(str2, str4);
	strcat(str3, str4);
	printf("\n�����ص��б�\n");
	printf("%s\n",str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	return 0;
}
