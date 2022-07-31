#include <stdio.h>
void click()
{
	static int sum = 0;/*定义static整型变量*/
	sum = sum +1;/*变量加1*/
	printf("此时点击率：%d\n",sum);/*显示结果*/
}

int main()
{ /*调用click()函数*/
    click();
    click();
    click();
    click();
    click();
return 0;
}