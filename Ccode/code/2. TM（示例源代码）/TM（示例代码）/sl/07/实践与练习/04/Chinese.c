/**
   �����Ŷӣ����տƼ�
   ����ѧԺ��վ��www.mingrisoft.com
   ������Ӣ�Ķ���
*/
#include<stdio.h>
int main()
{
	int i;
	printf("1 ��Ӧ����Ϊ�� ICBI\n");
	printf("2 ��Ӧ����Ϊ�� ABC\n");
	printf("3 ��Ӧ����Ϊ�� CCB\n");
	printf("4 ��Ӧ����Ϊ�� BOC\n");
	printf("5 ��Ӧ����Ϊ�� CMB\n");
	printf("6 ��Ӧ����Ϊ�� CEB\n");
	printf("7 ��Ӧ����Ϊ�� CMBC\n");
	printf("8 ��Ӧ����Ϊ�� CIB\n");
	printf("9 ��Ӧ����Ϊ�� BCM\n");
	printf("---------����ȫ�Ʋ�ѯϵͳ---------\n");
	do {
		printf("������Ҫ��ѯ�����ݣ�\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			printf("1 ��Ӧ����Ϊ�� �й��������� \n");
			break;
		case 2:
			printf("2 ��Ӧ����Ϊ�� �й�ũҵ���� \n");
			break;
		case 3:
			printf("3 ��Ӧ����Ϊ���й��������� \n");
			break;
		case 4:
			printf("4 ��Ӧ����Ϊ�� �й����� \n");
			break;
		case 5:
			printf("5 ��Ӧ����Ϊ���������� \n");
			break;
		case 6:
			printf("6 ��Ӧ����Ϊ���й�������� \n");
			break;
		case 7:
			printf("7 ��Ӧ����Ϊ�� �������� \n");
			break;
		case 8:
			printf("8 ��Ӧ����Ϊ�� ��ҵ���� \n");
			break;
		case 9:
			printf("9 ��Ӧ����Ϊ�� �й���ͨ���� \n");
			break;
		default:
			printf("���������������������롭��\n");
			break;
		}
	} while (1);
	return 0;
}
