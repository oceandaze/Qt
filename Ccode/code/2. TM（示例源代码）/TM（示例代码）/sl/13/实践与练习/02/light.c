/**
   �����Ŷӣ����տƼ�
   ����ѧԺ��վ��www.mingrisoft.com
   ģ����ƽ�ͨ�Ƴ���
*/
#include "stdio.h"
#define iInput 3
int main()
{
#if iInput==1 
	printf("-----------\n");
	printf("|  ���ͣ  |\n");
	printf("-----------\n");
#else
#if iInput==2
	printf("* * * * * * * *\n");
	printf("*   �̵���    *\n", iInput);
	printf("* * * * * * * *\n");
#else	
	printf("�� �� �� �� �� ��\n");
	printf("    �ƵƵȴ�\n", iInput);
	printf("�� �� �� �� �� ��\n");
#endif
#endif

	return 0;
}
