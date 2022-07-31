#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct pne
{
	char cName[20];							
	int iNumber;
	struct pne* pNext;
};

int iCount;

struct pne* Create()
{
	struct pne* pHead = NULL;
	struct pne* pEnd, * pNew;
	iCount = 0;
	pEnd = pNew = (struct pne*)malloc(sizeof(struct pne));
	printf("请输入重灾区省份\n");
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
		pNew = (struct pne*)malloc(sizeof(struct pne));
		scanf("%s", &pNew->cName);
		scanf("%d", &pNew->iNumber);
	}
	free(pNew);
	return pHead;
}

void Print(struct pne* pHead)
{
	struct pne* pTemp;
	int iIndex = 1;

	printf("----一共有 %d 成员:----\n", iCount);
	printf("\n");
	pTemp = pHead;

	while (pTemp != NULL)
	{
		printf("第 %d 个是:\n", iIndex);
		printf("the name is: %s\n", pTemp->cName);
		printf("数量是: %d\n", pTemp->iNumber);
		printf("\n");
		pTemp = pTemp->pNext;
		iIndex++;
	}
}


int main()
{
	struct pne* pHead;
	pHead = Create();
	Print(pHead);
	return 0;
}

