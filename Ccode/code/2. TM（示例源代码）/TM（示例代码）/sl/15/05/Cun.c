#include<stdio.h>
#include <stdlib.h>
int main()
{
		int *iInt;						/*��������ָ��*/	 
		char* cChar;							/*����ʵ��ָ��*/		 
		iInt=(int*)malloc(sizeof(int)); 	/*ʹ��mallocΪ�������Ϳռ�*/
		printf("���������ڴ��ǣ�%d\n",sizeof(*iInt));		/*����ռ�Ĵ�С*/	 
		cChar=realloc(iInt,sizeof(char));	/*ʹ��realloc�ı����ռ��С*/	 
		printf("�ַ������ڴ��ǣ�%d\n",sizeof(*cChar));			/*����ռ�Ĵ�С*/	
		return 0;							/*�������*/
}
