#include<stdio.h>
#include<string.h>


struct Ticket		/*定义车票结构体*/					 
{
	char cName[20];	/*名字*/					 
	int  iNumber;						 
	char S[20];/*乘车区间*/	
    char cAddress[20];/*车次*/	
    char c[20];/*开车时间*/	
}ticket;							 

int main()
{

	struct Ticket* pStruct;		/*定义结构体变量*/				 
	pStruct=&ticket;	/*指针指向结构体变量*/						 

	strcpy(pStruct->cName,"张伟");	 /*赋值*/
	pStruct->iNumber=285;				 
    strcpy(pStruct->S,"长春-北京");
    strcpy(pStruct->cAddress,"D71");
    strcpy(pStruct->c,"2021年2月20日09:08开");
	printf("姓名: %s\n",ticket.cName);/*输出结构体成员*/		 
	printf("票价: %d元\n",ticket.iNumber);
	printf("乘车区间: %s\n",ticket.S);
    printf("车次: %s\n",ticket.cAddress);
    printf("开车时间: %s\n",ticket.c);
	return 0;
}
