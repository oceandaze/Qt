/**
   �����Ŷӣ����տƼ�
   ����ѧԺ��վ��www.mingrisoft.com
   ģ�⡰��һ����С��Ϸ�ļӷֿ�
*/
#include<stdio.h>
int main()
{
	int score = 0,num;
	printf("--------------��һ��-------------\n");
	printf("��ӭ�������뿪ʼ��Ϸ����\n");
	
	while (1) 
	{
		printf("�����루1:���� 2:���ֿ� 3:΢��֧���飩��\n");
		scanf("%d",&num);
		if(num == 1)
		{
			score += 2;
			printf("��ѡ��������ġ�\n���ķ���Ϊ��%d\n",score);
		}
		else if(num == 2)
		{
			score += 30;
			printf("��ѡ��������ֿ顣\n���ķ���Ϊ��%d\n", score);
		}
		else if (num == 3)
		{
			score += 10;
			printf("��ѡ�����΢��֧���顣\n���ķ���Ϊ��%d\n", score);
		}
			
		else
		{
			printf("�Բ��������������\n");
			break;
		}
	}

	return 0;
}
