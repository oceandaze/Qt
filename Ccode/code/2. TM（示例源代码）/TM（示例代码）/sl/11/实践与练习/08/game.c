#include<stdio.h>
#include<stdlib.h>

struct Game
{
	char cName[20];							//��Ϸ��
	int iNumber;
	struct Game* pNext;
};

int iCount;

struct Game* Create()
{
	struct Game* pHead = NULL;
	struct Game* pEnd, *pNew;
	iCount = 0;
	pEnd = pNew = (struct Game*)malloc(sizeof(struct Game));
	printf("������2021�����Ϸǰ3����\n");
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
		pNew = (struct Game*)malloc(sizeof(struct Game));
		scanf("%s", &pNew->cName);
		scanf("%d", &pNew->iNumber);
	}
	free(pNew);
	return pHead;
}

void Print(struct Game* pHead)
{
	struct Game *pTemp;
	int iIndex = 1;

	printf("----һ���� %d ����Ա:----\n", iCount);
	printf("\n");
	pTemp = pHead;

	while (pTemp != NULL)
	{
		printf("�� NO%d ����Ա:\n", iIndex);
		printf("������: %s\n", pTemp->cName);
		printf("������:�� %d ��\n", pTemp->iNumber);
		printf("\n");
		pTemp = pTemp->pNext;
		iIndex++;
	}
}


int main()
{
	struct Game* pHead;
	pHead = Create();
	Print(pHead);
	return 0;
}
