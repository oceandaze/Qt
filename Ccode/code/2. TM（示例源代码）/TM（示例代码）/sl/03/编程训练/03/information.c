#include<stdio.h>
int main()
{
	int age;//��ʾ����
	float height,weight;//��ʾ��ߡ�����
	char sex;//��ʾ�Ա�
	age=31;
	height=1.68f,weight=59.4f;
	sex='M';
	printf("��ë������Ϣ���£�\n");
	printf("�����ǣ�%d��,�Ա��ǣ�%c\n",age,sex);
	printf("����ǣ�%f��,�����ǣ�%fǧ��\n",height,weight);
	return 0;
}