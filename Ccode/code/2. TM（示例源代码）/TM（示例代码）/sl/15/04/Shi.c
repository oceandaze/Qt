#include <stdlib.h>						/*����ͷ�ļ�*/
#include<stdio.h>
#include<string.h>

int main()								/*������main*/
{
		char* ch;							/*����ָ��*/	 
		ch=(char*)calloc(30,sizeof(char));	/*�������*/	 
    	strcpy(ch,"�廪��ѧ������");				/*���ַ�������*/
    	printf("%s\n",ch);					/*����ַ���*/
    	free(ch);							/*�ͷſռ�*/
		return 0;							/*�������*/
}
