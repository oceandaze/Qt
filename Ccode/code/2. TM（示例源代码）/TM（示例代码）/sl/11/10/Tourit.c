#include<stdio.h>
#include<stdlib.h>

struct Student
{
	char cName[20];								/*����*/
	int iNumber;									/*ѧ��*/
	struct Student* pNext;							/*ָ����һ���ڵ��ָ��*/
};

int iCount;												/*ȫ�ֱ�����ʾ������*/

struct Student* Create()
{
	struct Student* pHead=NULL;							/*��ʼ������ͷָ��Ϊ��*/
	struct Student* pEnd,*pNew;
	iCount=0;											/*��ʼ��������*/
	pEnd=pNew=(struct Student*)malloc(sizeof(struct Student));
	printf("���������֡�ѧ��:\n");
	scanf("%s",&pNew->cName);
	scanf("%d",&pNew->iNumber);
	while(pNew->iNumber!=0)
	{
		iCount++;
		if(iCount==1)
		{
			pNew->pNext=pHead;						/*ʹ��ָ��Ϊ��*/
			pEnd=pNew;								/*�����¼���Ľڵ�*/
			pHead=pNew;								/*ͷָ��ָ���׽ڵ�*/
		}
		else
		{
			pNew->pNext=NULL;						/*�½ڵ��ָ��Ϊ��*/
			pEnd->pNext=pNew;							/*ԭ����β�ڵ�ָ���½ڵ�*/
			pEnd=pNew;								/*pEndָ���½ڵ�*/
		}
		pNew=(struct Student*)malloc(sizeof(struct Student));	/*�ٴη���ڵ��ڴ�ռ�*/
		scanf("%s",&pNew->cName);
		scanf("%d",&pNew->iNumber);
	}
	free(pNew);										/*�ͷ�û���õ��Ŀռ�*/
	return pHead;
}

void Print(struct Student* pHead)
{
	struct Student *pTemp;								/*ѭ�����õ���ʱָ��*/
	int iIndex=1;										/*��ʾ�����нڵ�����*/

	printf("----�� %d ����Ա:----\n",iCount);			/*��Ϣ��ʾ*/
	printf("\n");										/*����*/
	pTemp=pHead;										/*ָ��õ��׽ڵ�ĵ�ַ*/

	while(pTemp!=NULL)
	{
		printf("NO%d ��Ա:\n",iIndex);
		printf("����: %s\n",pTemp->cName);			/*�������*/
		printf("ѧ��: %d\n",pTemp->iNumber);			/*���ѧ��*/
		printf("\n");									/*�������*/
		pTemp=pTemp->pNext;							/*�ƶ���ʱָ�뵽��һ���ڵ�*/
		iIndex++;										/*�����Լ�����*/
	}
}

int main()
{
	struct Student* pHead;								/*����ͷ�ڵ�*/
	pHead=Create();									/*�����ڵ�*/
	Print(pHead);										/*�������*/
	return 0;											/*�������*/
}

