#include "info.h"

void push_back(int num,_stack * a)
{
	node * pnew = (node *)malloc(sizeof(node));
	pnew->next = NULL; //ջ��ָ�����ΪNULL
	if(a->count == 0)//��ջ���޽�� 
	{
		a->head = pnew;//������һ�����
		a->_top = pnew;
		pnew -> val = num;
		a->count =1;
	}
	else
	{
		pnew->next = a->_top; //
		a->_top = pnew;
		pnew -> val = num;
		a -> count ++;
	}
}
int Size(_stack *a)
{
	return a->count;
}
void init(_stack * a)//ֻҪ����ջ �����ȵ���������� ��ʼ��
{
	a->push = push_back;//a->push �Ǻ���ָ��  ����ָ�� �Ϳ�ֱ�Ӹ��ݺ���ָ����ú���
	a->size = Size;
	a->top = Top;
	a->pop = Pop;
	a->empty = Empty;
}
int Top(_stack * a)
{
	assert(a->head!=NULL);
	return a->_top->val;
}
int Pop(_stack * a)
{
	if(a->count == 0)
	{
		return -1;
	}
	else if(a->count == 1)
	{
		free(a->_top);
		a->_top = NULL;
		a->head = NULL;
		a->count = 0;
	}
	else
	{
		node * temp = a->_top;
		a->_top = temp->next;
		free(temp);
		a->count--;
	}
	return 0;
}
int Empty(_stack * a)
{
	return a->head == NULL;
}

void clear(_stack * a)
{
	while(!a->empty(a))
	{
		a->pop(a);
	}
}