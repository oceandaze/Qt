#include<stdio.h>

int iGlobalPrice=100;							/*�趨�̵�ĳ�ʼ�۸�*/

void Store1Price();							/*���������������1��������*/
void Store2Price();							/*�����2��������*/
void Store3Price();							/*�����3��������*/
void ChangePrice();							/*�����������ͳһ�۸�*/

int main()
{
		/*����ʾ�۸�ı�֮ǰ����������ļ۸�*/
	printf("ԭ�۸� : %d\n",iGlobalPrice);
	Store1Price();							/*��ʾ1��������ļ۸�*/
	Store2Price();							/*��ʾ2��������ļ۸�*/
	Store3Price();							/*��ʾ3��������ļ۸�*/
		/*���ú������ı�������ļ۸�*/
	ChangePrice();
		/*��ʾ��ʾ����ʾ�޸ĺ�ļ۸�*/
	printf("�޸ĵļ۸���: %d\n",iGlobalPrice);
	Store1Price();							/*��ʾ1��������ĵ�ǰ�۸�*/
	Store2Price();							/*��ʾ2��������ĵ�ǰ�۸�*/
	Store3Price();							/*��ʾ3��������ĵ�ǰ�۸�*/
	return 0;
}
/*����1��������ļ۸���*/
void Store1Price()
{
	printf("��Ʒ1�ļ۸� : %d\n",iGlobalPrice);
}
/*����2��������ļ۸���*/
void Store2Price()
{
	printf("��Ʒ2�ļ۸� : %d\n",iGlobalPrice);
}
/*����3��������ļ۸���*/
void Store3Price()
{
	printf("��Ʒ3�ļ۸� : %d\n",iGlobalPrice);
}
/*�������������۸���*/
void ChangePrice()
{
	printf("����Ҫ�ļ۸�������ǣ��ĵļ۸���: ");
	scanf("%d",&iGlobalPrice);
}
