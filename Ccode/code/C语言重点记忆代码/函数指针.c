#include<stdio.h>

//指针函数  int *max(int x);
//函数指针 存储函数地址   int(*p)(参数)
//函数指针当参数用于回调函数
int cmp(int x,int y,int (*p)())
{	
	return (*p)(x,y);
}

int max(int x,int y)
{
	return x>y?x:y;
}
int sum(int x,int y)
{
	return x+y;
}
unsigned int mystrlen(char*str);
int comdiv(int a,int b);
char*myStrtok(char*src,const char * sub);
int main2()
{
	//printf("%d\n",cmp(5,6,sum));
	//printf("%d\n",cmp(5,6,max));
	//char str[]="hello world!";
	//int a=10;
	//int b=15;
	//int n=0;
	//n=mystrlen(str);
	//n=comdiv(a,b);
	//printf("%d",n);

	char str[100]={"123,.234, 456"};
	char sub[100]={",. "};
	char*p=NULL;
	p=str;
	while(p=myStrtok(p,sub))
	{
		puts(p);
		p=NULL;
	}
	return 0;
}

//使用递归实现strlen
unsigned int mystrlen(char*str)
{
	if(*str=='\0')
	{
		return 0;
	}
	return mystrlen(str+1)+1;

}
//辗转相除法 求最大公约数
//公式 gcd(a,b)=gcd(b,a%b)
//当b为0时，此时a为两数的最大公约数

int comdiv(int a,int b)
{
	if(b==0) return a;
	return comdiv(b,a%b);
}

//第一天吃一半多一个
//第十天剩余一个
//求第一天多少桃

//实现strtok
char*myStrtok(char*src,const char * sub)
{
	static char*tmp=NULL;
	char*start=(src==NULL?tmp:src);
	char*p=start;
	if(tmp!=NULL&&*tmp=='\0')
	{
		return NULL;
	}
	while(!strchr(sub,*p))
	{
		p++;
	}
	while(*p!='\0'&&strchr(sub,*p))
	{
		*p='\0';
		p++;
	}
	tmp=p;
	return start;
}