#include <stdio.h>
void park()
{
	static int sum = 3625;/*����static���ͱ���*/
	sum = sum -1;/*������1*/
	printf("����һ��������ʱ��λʣ��%d��\n",sum);/*��ʾ���*/
}

int main()
{ /*����park()����*/
    park();
    park();
    park();
    park();
    park();
    return 0;
}