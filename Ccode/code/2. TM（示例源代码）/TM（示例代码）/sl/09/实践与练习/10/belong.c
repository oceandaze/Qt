/**
   �����Ŷӣ����տƼ�
   ����ѧԺ��վ��www.mingrisoft.com
   �жϳ��ƺŵĹ�����
*/
#include<stdio.h>
#include<string.h>
int main()
{
	// ��ʼ�������б�
	char *car[3][2]= { { "��","A��12345" },
						{"��","A��23456" },
						{ "��","A��34567"}
};
	int i,j;
	printf("\n���ƺŹ����ز�ѯ��\n");
	for (i = 0; i < 3; i++)
	{
		for ( j = 0; j < 2; j++)
		{
			if (j == 0)
			{
				printf("\n");
			}
			printf("%s ", car[i][j]);			
		}
		if (strcmp("��", car[i][0]) == 0)
		{
			printf("������ƺŵĹ������ǣ����");
		}
		if (strcmp("��", car[i][0]) == 0)
		{
			printf("������ƺŵĹ������ǣ��Ϻ�");
		}
		if (strcmp("��", car[i][0]) == 0)
		{
			printf("������ƺŵĹ������ǣ�����");
		}
		
		
		

	}
	printf("\n");
	return 0;
}
