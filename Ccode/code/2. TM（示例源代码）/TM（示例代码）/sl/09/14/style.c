#include<stdio.h>

int main()									/*������main*/
{
	int iNumber1=1;						/*�ڵ�һ��iNumber1�������*/
	printf("%d\n",iNumber1);					/*�������ֵ*/

	if(iNumber1>0)
	{
		int iNumber1=2;					/*�ڵڶ���iNumber1�������*/
		printf("%d\n",iNumber1);				/*�������ֵ*/

		if(iNumber1>0)
		{
			int iNumber1=3;				/*�ڵ�3��iNumber1�������*/
			printf("%d\n",iNumber1);			/*�������ֵ*/
		}

		printf("%d\n",iNumber1);				/*�������ֵ*/
	}

	printf("%d\n",iNumber1);					/*�������ֵ*/
	return 0;	
}
