#include<stdio.h>
int main()
{
	int day = 0, total = 1020, sale;                //����������ֱ�洢��������������������֮��ʣ������
	while (total)                                //ѭ��������������������Ϊ0ʱ������ѭ��
	{
		sale = total / 2 - 2;                  //ʣ��������ԭ����һ����2��
		total = sale;                           //��sale����total
		day++;                                  //������1
	}
	printf("��Щ���ϣ�һ����%d��\n", day);    //��������Ϣ
	return 0;                                 //�������
}
