#include<stdio.h>
int getage(int n);//��������
int main()
{
	int age;//�������ͱ������洢����
	age = getage(5);//���ú�����������
	printf("-------------------------------\n");
	printf("        ��������ǣ�%d��\n", age);//����������
    printf("-------------------------------\n");
	return 0;//�������
}
int getage(int n)//�Զ��庯��
{
	if (n==1)//����Ǽ�
	{
		return 10;//����10��
	}
	return 2 + getage(n - 1);//�ݹ���ã�����getage()������ͬʱ��2
}