#include<stdio.h>

int main()
{
	int iNumber = 1;                                       //�����������ʾ1��100֮�������
	int iSum = 0;                                       //��������Ľ��
	do
	{
		iSum = iSum + iNumber;                       //�ۼӼ���
		iNumber++;                                    //ѭ����������
	} while (iNumber <= 100);                        //ѭ������
	printf("1~100�ĺ���:%d\n", iSum);              //���������
	return 0;                                        //�������
}
