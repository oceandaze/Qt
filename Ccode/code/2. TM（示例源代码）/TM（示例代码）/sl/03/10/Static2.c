#include <stdio.h>
void click()
{
	static int sum = 0;/*����static���ͱ���*/
	sum = sum +1;/*������1*/
	printf("��ʱ����ʣ�%d\n",sum);/*��ʾ���*/
}

int main()
{ /*����click()����*/
    click();
    click();
    click();
    click();
    click();
return 0;
}