#include "info.h"

void push_back(int num,_stack * a)
{
	node * pnew = (node *)malloc(sizeof(node));
	pnew->next = NULL; //栈底指针域必为NULL
	if(a->count == 0)//若栈内无结点 
	{
		a->head = pnew;//则放入第一个结点
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
void init(_stack * a)//只要定义栈 就需先调用这个函数 初始化
{
	a->push = push_back;//a->push 是函数指针  给与指向 就可直接根据函数指针调用函数
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