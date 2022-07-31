#include<stdio.h>

int main()
{
	int iCount;                          //循环控制变量
	for (iCount = 1; iCount <= 20; iCount++)//慕容宁打算跑20分钟
	{
		if (iCount == 10)	//跑到10分钟时遇到了美女
		{
			printf("看见美女了，我要与她约会\n");//输出慕容宁分心声
			break;	//跳出循环
		}
		printf("已经跑了%d分钟\n", iCount);//输出跑了多久
	}
	return 0;//程序结束
}