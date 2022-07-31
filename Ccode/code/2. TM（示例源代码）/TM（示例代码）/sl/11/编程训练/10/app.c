#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct APP
{
	char cName[20];							/*�ص�*/
	int iNumber;							/*˳���*/
	struct APP* pNext;					/*ָ����һ������ָ��*/
};

int iCount;

struct APP* Create()
{
	struct APP* pHead = NULL;
	struct APP* pEnd, * pNew;
	iCount = 0;
	pEnd = pNew = (struct APP*)malloc(sizeof(struct APP));
	printf("�����뼯������app���֣�\n");
	scanf("%s", &pNew->cName);
	scanf("%d", &pNew->iNumber);
	while (pNew->iNumber != 0)
	{
		iCount++;
		if (iCount == 1)
		{
			pNew->pNext = pHead;
			pEnd = pNew;
			pHead = pNew;
		}
		else
		{
			pNew->pNext = NULL;
			pEnd->pNext = pNew;
			pEnd = pNew;
		}
		pNew = (struct APP*)malloc(sizeof(struct APP));
		scanf("%s", &pNew->cName);
		scanf("%d", &pNew->iNumber);
	}
	free(pNew);		/*�ͷ�û���õ��Ŀռ�*/
	return pHead;
}

void Print(struct APP* pHead)
{
	struct APP* pTemp;	/*ѭ�����õ���ʱָ��*/
	int iIndex = 1;			/*��ʾ�����н������*/

	printf("----һ���� %d ��app:----\n", iCount);		/*��Ϣ��ʾ*/
	printf("\n");		/*����*/
	pTemp = pHead;			/*ָ��õ��׽��ĵ�ַ*/

	while (pTemp != NULL)
	{
		printf(" NO%d ��app:\n", iIndex);
		printf("������: %s\n", pTemp->cName);
		printf("��%d��\n", pTemp->iNumber);
		printf("\n");	/*�������*/
		pTemp = pTemp->pNext;			/*�ƶ���ʱָ�뵽��һ�����*/
		iIndex++;									/*�����Լ�����*/
	}
}


int main()
{
	struct APP* pHead;		/*����ͷ���*/
	pHead = Create();				/*�������*/
	Print(pHead);				/*�������*/
	return 0;					/*�������*/
}
