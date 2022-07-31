/**
   �����Ŷӣ����տƼ�
   ����ѧԺ��վ��www.mingrisoft.com
   ����������
*/
#include<stdio.h>
#include<stdlib.h>

struct Tour
{
	char cName[20];							//�ص�
	int iNumber;							//˳���
	struct Tour* pNext;					//ָ����һ������ָ��
};

int iCount;

struct Tour* Create()
{
	struct Tour* pHead = NULL;
	struct Tour* pEnd, *pNew;
	iCount = 0;
	pEnd = pNew = (struct Tour*)malloc(sizeof(struct Tour));
	printf("\n��������G�����������ι۹�ĵص㣺\n");
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
	free(pNew);		//�ͷ�û���õ��Ŀռ�
	return pHead;
}

void Print(struct Tour* pHead)
{
	struct Tour *pTemp;	//ѭ�����õ���ʱָ��
	int iIndex = 1;			//��ʾ�����н������

	printf("----�� %d ���ص�:----\n", iCount);		//��Ϣ��ʾ
	printf("\n");		//����
	pTemp = pHead;			//ָ��õ��׽��ĵ�ַ

	while (pTemp != NULL)
	{
		printf("�� NO%d �ص���:\n", iIndex);
		printf(" %s\n", pTemp->cName);
		printf("��%d���ι�\n", pTemp->iNumber);
		printf("\n");	//�������
		pTemp = pTemp->pNext;			//�ƶ���ʱָ�뵽��һ�����
		iIndex++;									//�����Լ�����
	}
}


int main()
{
	struct Tour* pHead;		//����ͷ���
	pHead = Create();				//�������
	Print(pHead);				//�������
	return 0;					//�������
}
