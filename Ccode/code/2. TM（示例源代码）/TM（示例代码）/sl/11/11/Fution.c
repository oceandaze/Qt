#include<stdio.h>
#include<stdlib.h>

struct Student
{
	char cName[20];									/*����*/
	int iNumber;										/*ѧ��*/
	struct Student* pNext;								/*ָ����һ���ڵ��ָ��*/
};

int iCount;												/*ȫ�ֱ�����ʾ������*/

struct Student* Create()
{
	struct Student* pHead=NULL;							/*��ʼ������ͷָ��Ϊ��*/
	struct Student* pEnd,*pNew;
	iCount=0;											/*��ʼ��������*/
	pEnd=pNew=(struct Student*)malloc(sizeof(struct Student));
	printf("������������ѧ�ţ�\n");
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
	struct Student *pTemp;						/*ѭ�����õ���ʱָ��*/
	int iIndex=1;								/*��ʾ�����нڵ�����*/

	printf("----�� %d ����Ա:----\n",iCount);	/*��Ϣ��ʾ*/
	printf("\n");								/*����*/
	pTemp=pHead;								/*ָ��õ��׽ڵ�ĵ�ַ*/

	while(pTemp!=NULL)
	{
		printf(" NO%d �ų�Ա:\n",iIndex);
		printf("����: %s\n",pTemp->cName);	/*�������*/
		printf("ѧ��: %d\n",pTemp->iNumber);	/*���ѧ��*/
		printf("\n");							/*�������*/
		pTemp=pTemp->pNext;					/*�ƶ���ʱָ�뵽��һ���ڵ�*/
		iIndex++;								/*�����Լ�����*/
	}
}

struct Student* Insert(struct Student* pHead)
{
	struct Student* pNew;						/*ָ���·���Ŀռ�*/
	printf("----�����1����Ϣ----\n");			/*��ʾ��Ϣ*/
	pNew=(struct Student*)malloc(sizeof(struct Student));	/*�����ڴ�ռ䣬������ָ����ڴ�ռ��ָ��*/

	scanf("%s",&pNew->cName);
	scanf("%d",&pNew->iNumber);

	pNew->pNext=pHead;						/*�½ڵ�ָ��ָ��ԭ�����׽ڵ�*/
	pHead=pNew;								/*ͷָ��ָ���½ڵ�*/
	iCount++;									/*��������ڵ�����*/
	return pHead;
}

void Delete(struct Student* pHead,int iIndex)			/*pHead��ʾͷ�ڵ㣬iIndex��ʾҪɾ���Ľڵ��±�*/
{
	int i;  									/*����ѭ������*/
	struct Student* pTemp;		 				/*��ʱָ��*/
	struct Student* pPre;							/*��ʾҪɾ���ڵ�ǰ�Ľڵ�*/
	pTemp=pHead;								/*�õ�ͷ�ڵ�*/
	pPre=pTemp;

	printf("----ɾ�� NO%d ����Ա----\n",iIndex);		/*��ʾ��Ϣ*/
	for(i=1;i<iIndex;i++)							/*forѭ��ʹ��pTempָ��Ҫɾ���Ľڵ�*/
	{
		pPre=pTemp;
		pTemp=pTemp->pNext;
	}
	pPre->pNext=pTemp->pNext;					/*����ɾ���ڵ����ߵĽڵ�*/
	free(pTemp);							/*�ͷ�Ҫɾ���ڵ���ڴ�ռ�*/
	iCount--;								/*���������е�Ԫ�ظ���*/
}

int main()
{
	struct Student* pHead;					/*����ͷ�ڵ�*/
	pHead=Create();						/*�����ڵ�*/
	pHead=Insert(pHead);					/*����ڵ�*/
	Delete(pHead,2);						/*ɾ���ڶ����ڵ�*/
	Print(pHead);							/*�������*/
	return 0;								/*�������*/
}
