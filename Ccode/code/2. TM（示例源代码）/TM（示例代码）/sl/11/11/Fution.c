#include<stdio.h>
#include<stdlib.h>

struct Student
{
	char cName[20];									/*姓名*/
	int iNumber;										/*学号*/
	struct Student* pNext;								/*指向下一个节点的指针*/
};

int iCount;												/*全局变量表示链表长度*/

struct Student* Create()
{
	struct Student* pHead=NULL;							/*初始化链表，头指针为空*/
	struct Student* pEnd,*pNew;
	iCount=0;											/*初始化链表长度*/
	pEnd=pNew=(struct Student*)malloc(sizeof(struct Student));
	printf("请输入姓名、学号：\n");
	scanf("%s",&pNew->cName);
	scanf("%d",&pNew->iNumber);
	while(pNew->iNumber!=0)
	{
		iCount++;
		if(iCount==1)
		{
			pNew->pNext=pHead;						/*使得指向为空*/
			pEnd=pNew;								/*跟踪新加入的节点*/
			pHead=pNew;								/*头指针指向首节点*/
		}
		else
		{
			pNew->pNext=NULL;						/*新节点的指针为空*/
			pEnd->pNext=pNew;							/*原来的尾节点指向新节点*/
			pEnd=pNew;								/*pEnd指向新节点*/
		}
		pNew=(struct Student*)malloc(sizeof(struct Student));	/*再次分配节点内存空间*/
		scanf("%s",&pNew->cName);
		scanf("%d",&pNew->iNumber);
	}
	free(pNew);										/*释放没有用到的空间*/
	return pHead;
}

void Print(struct Student* pHead)
{
	struct Student *pTemp;						/*循环所用的临时指针*/
	int iIndex=1;								/*表示链表中节点的序号*/

	printf("----有 %d 名成员:----\n",iCount);	/*消息提示*/
	printf("\n");								/*换行*/
	pTemp=pHead;								/*指针得到首节点的地址*/

	while(pTemp!=NULL)
	{
		printf(" NO%d 号成员:\n",iIndex);
		printf("姓名: %s\n",pTemp->cName);	/*输出姓名*/
		printf("学号: %d\n",pTemp->iNumber);	/*输出学号*/
		printf("\n");							/*输出换行*/
		pTemp=pTemp->pNext;					/*移动临时指针到下一个节点*/
		iIndex++;								/*进行自加运算*/
	}
}

struct Student* Insert(struct Student* pHead)
{
	struct Student* pNew;						/*指向新分配的空间*/
	printf("----插入第1名信息----\n");			/*提示信息*/
	pNew=(struct Student*)malloc(sizeof(struct Student));	/*分配内存空间，并返回指向该内存空间的指针*/

	scanf("%s",&pNew->cName);
	scanf("%d",&pNew->iNumber);

	pNew->pNext=pHead;						/*新节点指针指向原来的首节点*/
	pHead=pNew;								/*头指针指向新节点*/
	iCount++;									/*增加链表节点数量*/
	return pHead;
}

void Delete(struct Student* pHead,int iIndex)			/*pHead表示头节点，iIndex表示要删除的节点下标*/
{
	int i;  									/*控制循环变量*/
	struct Student* pTemp;		 				/*临时指针*/
	struct Student* pPre;							/*表示要删除节点前的节点*/
	pTemp=pHead;								/*得到头节点*/
	pPre=pTemp;

	printf("----删除 NO%d 名成员----\n",iIndex);		/*提示信息*/
	for(i=1;i<iIndex;i++)							/*for循环使得pTemp指向要删除的节点*/
	{
		pPre=pTemp;
		pTemp=pTemp->pNext;
	}
	pPre->pNext=pTemp->pNext;					/*连接删除节点两边的节点*/
	free(pTemp);							/*释放要删除节点的内存空间*/
	iCount--;								/*减少链表中的元素个数*/
}

int main()
{
	struct Student* pHead;					/*定义头节点*/
	pHead=Create();						/*创建节点*/
	pHead=Insert(pHead);					/*插入节点*/
	Delete(pHead,2);						/*删除第二个节点*/
	Print(pHead);							/*输出链表*/
	return 0;								/*程序结束*/
}
