#include <stdio.h>
left(unsigned value, int n)									/*�Զ������ƺ���*/
{
    unsigned z;
    z = (value >> (32-n)) | (value << n);						/*ѭ�����Ƶ�ʵ�ֹ���*/
    return z;
} 
int main()
{
    unsigned a;
    int n;
    printf("������һ����:\n");
    scanf("%o", &a);										/*����һ���˽�����*/
    printf("������Ҫ��λ��λ����>0��:\n");
    scanf("%d", &n);										/*����Ҫ��λ��λ��*/
    printf("ѭ�����ƵĽ��:%o\n", left(a, n));						/*�����ƺ�Ľ�����*/
	return 0;
}
