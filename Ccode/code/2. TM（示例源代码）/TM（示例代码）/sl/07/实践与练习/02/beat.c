/**
   �����Ŷӣ����տƼ�
   ����ѧԺ��վ��www.mingrisoft.com
   ���������
*/
#include<stdio.h>
int main()
{
	int month;

	while(1){
	printf("��������ĳ����·ݣ�\n");
	scanf("%d",&month);
	switch (month)
	{
		case 1:
			printf("���������Ħ����\n��������8\n");
			break;
		case 2:
			printf("���������ˮƽ��\n��������4\n");
			break;
		case 3:
			printf("���������˫����\n��������7\n");
			break;
		case 4:
			printf("��������ǰ�����\n��������9\n");
			break;
		case 5:
			printf("��������ǽ�ţ��\n��������6\n");
			break;
		case 6:
			printf("���������˫����\n��������5\n");
			break;
		case 7:
			printf("��������Ǿ�з��\n��������2\n");
			break;
		case 8:
			printf("���������ʨ����\n��������1\n");
			break;
		case 9:
			printf("��������Ǵ�Ů��\n��������5\n");
			break;
		case 10:
			printf("��������������\n��������6\n");
			break;
		case 11:
			printf("�����������Ы��\n��������9\n");
			break;
		case 12:
			printf("���������������\n��������3\n");
			break;
		default:
			printf("���벻��ȷ����������������\n");
     }
	}
	return 0;
}