#include<stdio.h>				/*����ͷ�ļ�*/
int main()					/*������main*/
{
		int i; 					/*����ѭ�����Ʊ���*/
		char *month[]=
		{
               "January", 		/*��ָ�������е�Ԫ�ظ���ֵ*/
               "February", 
               "March", 
               "April", 
               "May", 
               "June", 
               "July", 
               "August", 
               "September", 
               "October", 
               "November", 
               "December" 
	};													 
	 	for(i=0;i<12;i++)
			printf("%s\n",month[i]); 	/*���ָ�������еĸ�Ԫ��*/
		return 0;
}
