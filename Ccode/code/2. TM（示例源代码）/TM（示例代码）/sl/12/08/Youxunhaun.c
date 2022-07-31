#include <stdio.h>
right(unsigned value, int n)								/*自定义右移函数*/
{
    unsigned z;
    z = (value << (32-n)) | (value >> n);						/*循环右移的实现过程*/
    return z;
} 
main()
{
    unsigned a;
    int n;
    printf("请输入一个数:\n");
    scanf("%o", &a);										/*输入一个八进制数*/
    printf("输入要移位的位数（>0）:\n");
    scanf("%d", &n);										/*输入要移位的位数*/
    printf("右移后的结果是:%o\n", right(a, n));						/*将右移后的结果输出*/
}
