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

extern void push_back(int num,_stack * a);//��ջ
extern void init(_stack * a);//��ʼ�� ��ջ�ڵĺ���ָ���ȡָ��
extern int Size(_stack * a);//��ȡջ�ڽ�����
extern int Top(_stack * a);//��ȡջ�����ֵ
extern int Pop(_stack * a);//ɾ��ջ�����
extern int Empty(_stack * a);//�ж�ջ���Ƿ�Ϊ��
extern void clear(_stack * a);//���ջ
