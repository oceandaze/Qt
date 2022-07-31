#include<stdio.h>
#include<string.h>

int isValid(char*str);
int combineNum(int *arr,int n,int *arr2);
int combinealph(char *str,char stack);
int main1();
int main()
{
	/*
	char str[100]={"()()"};
	int n=0;
	n=isValid(str);
	printf("%d",n);
	*/
	
	/*
	int arr[100]={4,2,2,1,1,2,2,2,4,4,4,4};
	int arr2[100]={0};
	int n=12;
	int m=0;
	int i=0;
	m=combineNum(arr,n,arr2);
	for(i=0;i<m;i++)
	{
		printf("%d",arr2[i]);
	}
	*/
	
	/*
	char str[100]={"abccbba"};
	char stack[100]={0};
	combinealph(str,stack);
	puts(stack);
	*/
	int n=0;
	n=main1();
	printf("%d",n);
	return  0;
}


//数组模拟栈结构：数据结构，先进后出
//输入字符串，仅包含（）[]{}
//"()""([])""[]({})"
int isValid(char*str)
{
	int i=0;
	char temp[100]={0};
	int m=0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='('||str[i]=='['||str[i]=='{')
		{
			temp[m++]=str[i];
		}
		else if(str[i]==')')
		{
			if(m==0)
			{
				return 0;
			}
			else if(temp[m-1]=='(')
			{
				temp[--m]='\0';
			}
			else
			{
				return 0;
			}
		}
		else if(str[i]==']')
		{
			if(m==0)
			{
				return 0;
			}
			else if(temp[m-1]=='[')
			{
				temp[--m]='\0';
			}
			else
			{	
				return 0;
			}
		}
		else if(str[i]=='}')
		{
			if(m==0)
			{
				return 0;
			}
			else if(temp[m-1]=='{')
			{
				temp[--m]='\0';	
			}
			else
			{
				return 0;
			}
		}
	}
	if(m!=0)
	{
		return 0;
	}
		return 1;
}
//输入n,输入n个元素，消消乐栈思想（先入后出，后入先出）
int combineNum(int *arr,int n,int *arr2)
{
	int i=0;
	int m=0;
	for(i=0;i<n;i++)
	{
		arr2[m++]=arr[i];
		while(m-1!=0&&arr2[m-1]==arr2[m-2])
		{
			arr2[m-2]*=2;
			m--;
		}
	}
	return m;
}

int combinealph(char *str,char *stack)
{
	int i=0;
	int j=0;
	int m=0;
	/*
	for(i=0;i<strlen(str);i++)
	{
		stack[m++]=str[i];
		while(m-1>0&&stack[m-1]==stack[m-2])
		{
			m=m-2;
			stack[m]='\0';
		}
	}
	*/
	for(i=0;i<strlen(str);i++)
	{
		stack[m]=str[i];
		if(m>1&&stack[m]==stack[m-1])
		{
			stack[m-1]='\0';
			m=m-1;
		}
		else
		{
			m++;
		}
		
	}
	stack[m]='\0';
	
	return m;
}

int main1()
{
	int pushed[5]={1,2,3,4,5};
	int poped[5]={4,5,3,2,1};
	int stack[5]={0};
	int pos=0;
	int i=0;
	int j=0;
	for(i=0;i<5;i++)
	{
		stack[pos++]=pushed[i];
		while(pos>0&&stack[pos-1]==poped[j])
		{
			j++;
			pos--;
		}		
	}
	return pos==0?1:0;		 
}