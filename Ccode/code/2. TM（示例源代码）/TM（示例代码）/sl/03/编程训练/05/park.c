#include <stdio.h>
void park()
{
	static int sum = 3625;/*定义static整型变量*/
	sum = sum -1;/*变量加1*/
	printf("进入一辆车，此时车位剩：%d个\n",sum);/*显示结果*/
}

int main()
{ /*调用park()函数*/
    park();
    park();
    park();
    park();
    park();
    return 0;
}