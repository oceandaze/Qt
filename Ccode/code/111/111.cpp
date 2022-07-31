// 111.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int getsum(int n)
{
	int sum=0;

	if(n==1)
	{
		return 1;
	}
	return getsum(n-1)*getsum(n+1);
}
/*
int GetSum()
{
	int i=0;
	int sum=0;
	 for(i=1;i<=50;i++)
	 {
		sum=sum+i*(i+1);
	 }
	 return sum;
}
*/
int main()
{
	int sum=0;
	//sum=GetSum();
	sum=getsum(10);
	printf("%d",sum);
	return 0;
}