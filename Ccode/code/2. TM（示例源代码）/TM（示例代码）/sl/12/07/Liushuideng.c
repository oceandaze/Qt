#include <stdio.h>
left(unsigned value, int n)									/*自定义左移函数*/
{
    unsigned z;
    z = (value >> (32-n)) | (value << n);						/*循环左移的实现过程*/
    return z;
} 
int main()
{
    unsigned a;
    int n;
    printf("请输入一个数:\n");
    scanf("%o", &a);										/*输入一个八进制数*/
    printf("请输入要移位的位数（>0）:\n");
    scanf("%d", &n);										/*输入要移位的位数*/
    printf("循环左移的结果:%o\n", left(a, n));						/*将左移后的结果输出*/
	return 0;
}
