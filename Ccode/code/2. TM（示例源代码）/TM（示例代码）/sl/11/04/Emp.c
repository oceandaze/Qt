#include<stdio.h>/*包含头文件*/
struct People	/*定义结构体*/								 
{
	char cName[20];		/*姓名*/					 
	int  iNumber;/*职位号*/							 
	char cS[20];/*部门*/							 
		
}people={"张伟",14,"开发部"};/*对结构体变量初始化*/	
		 
int main()
{


	struct  People* pStruct;/*定义结构体类型指针*/				 
	pStruct=&people;	/*指针指向结构体变量*/				 
	printf("-----信息如下-----\n");	 /*提示信息*/
	printf("姓名: %s\n",(*pStruct).cName);	/*使用指针输出结构体成员*/		 
	printf("职工号: %d\n",(*pStruct).iNumber);
	printf("部门: %s\n",(*pStruct).cS);
	return 0;/*程序结束*/
}