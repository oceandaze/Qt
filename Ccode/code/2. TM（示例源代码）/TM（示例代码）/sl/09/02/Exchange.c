#include<stdio.h>

void exchange(int a,int b);	/*��������*/
int main()
{
    int a=3,b=4;/*�������ͱ���*/
	printf("����֮ǰ��ֵa=%d,b=%d\n",a,b);/*��ʾ��Ϣ*/
	exchange(a,b);		/*�����Զ��庯��*/
	return 0;
}
void exchange(int a,int b)/*�����Ķ���*/
{
	int c;                /*������ֵ*/
    c=a;
    a=b;
    b=c;
    printf("�������ֵa=%d,b=%d\n",a,b);/*�������֮�������*/
    
}
