#include<stdio.h>
#include<string.h>
sort(char* strings[], int n)//����һ������ĺ���
{
	char* temp;//�������ڽ������м����
	int i, j;//������Ʊ���
	for (i = 0; i < n; i++)//���ѭ��
	{
		for (j = i + 1; j < n; j++)//�ڲ�ѭ��
		{
			if (strcmp(strings[i], strings[j]) > 0)//�Ƚ������ַ�
			{
				temp = strings[i];//�����ַ�λ��
				strings[i] = strings[j];
				strings[j] = temp;
			}
		}
	}
}
void main()
{
	int n = 5;//����һ���м�������
	int i;//������Ʊ���
	char** p;//����ָ���ָ��
	char* strings[] = { "��Сƽ","������","���īh","����","��С��" };//�����ַ���ָ�����鲢��ʼ��
	p = strings;//ָ��ָ�������׵�ַ
	printf("һ����5�����֣��ֱ��ǣ�\n");//�����ʾ��Ϣ
	for (i = 0; i < n; i++)//��������ǰ������
	{
		printf("%s\n", strings[i]);//�������ǰ������
	}
	sort(p, n);//�������򺯣������ֽ�������
	printf("������������֮��ֱ��ǣ�\n");//�����ʾ��Ϣ
	for (i = 0; i < n; i++)//��������������
	{
		printf("%s\n", strings[i]);//�������������
	}
}