#include<stdio.h>

//ָ�뺯��  int *max(int x);
//����ָ�� �洢������ַ   int(*p)(����)
//����ָ�뵱�������ڻص�����
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

//ʹ�õݹ�ʵ��strlen
unsigned int mystrlen(char*str)
{
	if(*str=='\0')
	{
		return 0;
	}
	return mystrlen(str+1)+1;

}
//շת����� �����Լ��
//��ʽ gcd(a,b)=gcd(b,a%b)
//��bΪ0ʱ����ʱaΪ���������Լ��

int comdiv(int a,int b)
{
	if(b==0) return a;
	return comdiv(b,a%b);
}

//��һ���һ���һ��
//��ʮ��ʣ��һ��
//���һ�������

//ʵ��strtok
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