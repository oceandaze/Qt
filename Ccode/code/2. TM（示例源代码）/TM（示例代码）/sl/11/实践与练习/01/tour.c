/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   长春三日游
*/
#include<stdio.h>
#include<stdlib.h>

struct Tour
{
	char cName[20];							//地点
	int iNumber;							//顺序号
	struct Tour* pNext;					//指向下一个结点的指针
};

int iCount;

struct Tour* Create()
{
	struct Tour* pHead = NULL;
	struct Tour* pEnd, *pNew;
	iCount = 0;
	pEnd = pNew = (struct Tour*)malloc(sizeof(struct Tour));
	printf("\n请输入钢镚儿长春三日游观光的地点：\n");
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
		pNew = (struct Tour*)malloc(sizeof(struct Tour));
		scanf("%s", &pNew->cName);
		scanf("%d", &pNew->iNumber);
	}
	free(pNew);		//释放没有用到的空间
	return pHead;
}

void Print(struct Tour* pHead)
{
	struct Tour *pTemp;	//循环所用的临时指针
	int iIndex = 1;			//表示链表中结点的序号

	printf("----有 %d 个地点:----\n", iCount);		//消息提示
	printf("\n");		//换行
	pTemp = pHead;			//指针得到首结点的地址

	while (pTemp != NULL)
	{
		printf("第 NO%d 地点是:\n", iIndex);
		printf(" %s\n", pTemp->cName);
		printf("第%d个参观\n", pTemp->iNumber);
		printf("\n");	//输出换行
		pTemp = pTemp->pNext;			//移动临时指针到下一个结点
		iIndex++;									//进行自加运算
	}
}


int main()
{
	struct Tour* pHead;		//定义头结点
	pHead = Create();				//创建结点
	Print(pHead);				//输出链表
	return 0;					//程序结束
}
