#include "info.h"

int main()
{
	_stack a = {0};
	init(&a); //��ʼ��
	a.push(3,&a);
	a.push(4,&a);
	a.push(5,&a);
	printf("%d\n",a.size(&a));
	printf("%d\n",a.top(&a));
	a.pop(&a);
	printf("%d\n",a.size(&a));
	printf("%d\n",a.top(&a));
	printf("%d\n",a.empty(&a));
	clear(&a); //���ջ
	return 0;
}