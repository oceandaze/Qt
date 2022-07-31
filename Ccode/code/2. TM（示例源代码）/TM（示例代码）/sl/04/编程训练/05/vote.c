#include<stdio.h>
int main()
{
	int vote=156;                                 //定义变量表示投票数
	printf("观众投票之后丫头得%d票\n", vote);    //输出观众投票数
	vote++;                                        //导师一投丫头一票
	printf("导师一投给丫头之后得%d票\n", vote);  //输出导师一投票后票数
	vote++;                                        //导师二投丫头一票
	printf("导师二投给丫头之后得%d票\n", vote);  //输出导师二投票后票数
	vote++;                                        //导师三投丫头一票
	printf("导师三投给丫头之后得%d票\n",vote);   //输出导师三投票后票数
	return 0;                                     //程序结束
}
