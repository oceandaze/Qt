#include<stdio.h>
int main()
{
	int iIndex;								/*ѭ�����Ʊ���*/
	char cArray[33]="Education is the door to freedom";			/*�����ַ��������ڱ����ַ���*/
	char cArray2[100]="������ͨ������֮��";			/*�����ַ��������ڱ����ַ���*/

	for(iIndex=0;iIndex<33;iIndex++)
	{
		printf("%c",cArray[iIndex]); 		/*�������ַ������е��ַ�*/
	}
	printf("\n%s\n",cArray2); 		/*ֱ�ӽ��ַ������*/
	return 0;
}
