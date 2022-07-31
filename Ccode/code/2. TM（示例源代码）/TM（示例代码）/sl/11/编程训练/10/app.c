#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct APP
{
	char cName[20];							/*地点*/
	int iNumber;							/*顺序号*/
	struct APP* pNext;					/*指向下一个结点的指针*/
};

int iCount;

struct APP* Create()
{
	struct APP* pHead = NULL;
	struct APP* pEnd, * pNew;
	iCount = 0;
	pEnd = pNew = (struct APP*)malloc(sizeof(struct APP));
	printf("请输入集卡集福app名字：\n");
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
	free(pNew);		/*释放没有用到的空间*/
	return pHead;
}

void Print(struct APP* pHead)
{
	struct APP* pTemp;	/*循环所用的临时指针*/
	int iIndex = 1;			/*表示链表中结点的序号*/

	printf("----一共有 %d 个app:----\n", iCount);		/*消息提示*/
	printf("\n");		/*换行*/
	pTemp = pHead;			/*指针得到首结点的地址*/

	while (pTemp != NULL)
	{
		printf(" NO%d 个app:\n", iIndex);
		printf("名字是: %s\n", pTemp->cName);
		printf("第%d个\n", pTemp->iNumber);
		printf("\n");	/*输出换行*/
		pTemp = pTemp->pNext;			/*移动临时指针到下一个结点*/
		iIndex++;									/*进行自加运算*/
	}
}


int main()
{
	struct APP* pHead;		/*定义头结点*/
	pHead = Create();				/*创建结点*/
	Print(pHead);				/*输出链表*/
	return 0;					/*程序结束*/
}
