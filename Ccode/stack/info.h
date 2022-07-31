#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct Node
{
	int val;
	struct Node * next;
}node;

typedef struct Stack
{
	struct Node * head;
	struct Node * _top;
	int count;
	void (*push)(int,struct Stack *);
	int (*size)(struct Stack *);
	int (*top)(struct Stack *);
	int (*pop)(struct Stack *);
	int (*empty)(struct Stack *);
}_stack;

extern void push_back(int num,_stack * a);//入栈
extern void init(_stack * a);//初始化 让栈内的函数指针获取指向
extern int Size(_stack * a);//获取栈内结点个数
extern int Top(_stack * a);//获取栈顶结点值
extern int Pop(_stack * a);//删除栈顶结点
extern int Empty(_stack * a);//判断栈内是否为空
extern void clear(_stack * a);//清空栈
