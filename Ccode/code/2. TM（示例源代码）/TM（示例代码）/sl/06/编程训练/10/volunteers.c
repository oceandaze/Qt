#include<stdio.h>
int main()
{
	int fs;
	printf("���������ĸ߿��ɼ���");
	scanf("%d", &fs);
	switch (fs)
	{
	case 671:
		printf("ѡ�񱱾���ѧ\n");
		break;
	case 661:
		printf("ѡ���廪��ѧ\n");
		break;
	case 668:
		printf("ѡ�񸴵���ѧ\n");
		break;
	case 664:
		printf("ѡ���Ϻ���ͨ��ѧ\n");
		break;
	default:
		printf("ѡ��������ѧ\n");
		break;

	}
	return 0;
}