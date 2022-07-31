#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct words
{
	char s[10];
	int cnt;
}words;
 words wordcnt[20];


int cmp(const void * a,const void * b)
{
	char ** p = (char **)a;
	char ** q = (char **)b;
	return strcmp(*p,*q); 
}
int getCnt(char**pos,int n)
{
	int maxCount=0;
	int i=0;
	int j=0;
	for(i=1;i<n;i++)
	{
		for(j=0;pos[i][j]==pos[i-1][j];j++)
		{	
		}
		maxCount<j?maxCount=j:0;
	}
	return maxCount;
}
int longestsub(char*str)
{
	char*p=str;
	char*pos[100]={0};
	int i=0;
	int len= strlen(str);
	for(i=0;i<len;i++)
	{
		pos[i]=p+i;
	}
	qsort(pos, i, sizeof(char*), cmp); 
	printf("排序后\n");
	for(i=0;i<len;i++)
	{
		printf("%s\n",pos[i]);
	}
	return getCnt(pos,i);
}

void revert(char *str)
{
	char*p=NULL;
	//char str2[100][100]={0};
	char*str2[100]={0};
	int n=0;
	int i=0;
	int j=0;
	int k=0;
	char c=0;
	p=str;
	while(p=strtok(p," "))
	{
		//strcpy(str2[n],p);
		str2[n]=p;
		n++;
		p=NULL;
	}
	for(i=0;i<n;i++)
	{
		for(j=0,k=strlen(str2[i])-1;j<k;j++,k--)
		{
			c=str2[i][j];
			str2[i][j]=str2[i][k];
			str2[i][k]=c;
		}
	}
}
int cmp2(const void * a,const void * b)
{
	words * p = (words *)a;
	words * q = (words *)b;
	if(p->cnt>q->cnt)
	{
		return -1;
	}
	else 
	{
		return 1;
	}
	
}



int CalWords(char*str);
int main()
{
	/*
	char str[]={"abababa"};
	int res=0;
	res=longestsub(str);
	printf("%d",res);
	*/
	//相对开音节
	//char str[]={"ekam a ekac"};
	//revert(str);

	char str[100]={"hello hi hi nihao hello nihao nihao hello "};
	int m=0;
	int i=0;
	m=CalWords(str);
	qsort(wordcnt,m,sizeof(words),cmp2);
	printf("排序后\n");
	for(i=0;i<m;i++)
	{
		printf("%s %d\n",wordcnt[i].s,wordcnt[i].cnt);
	}
	return 0;
}

int CalWords(char*str)
{
	char*p=NULL;
	int i=0;
	int m=0;
	p=str;

	while(p=strtok(p," "))
	{
		for(i=0;i<=m;i++)
		{
			if(strcmp(wordcnt[i].s,p)==0)
			{
				wordcnt[i].cnt+=1;
				break;
			}
			else if(strcmp(wordcnt[i].s,"")==0)
			{
				m++;
				strcpy(wordcnt[i].s,p);
				wordcnt[i].cnt=1;
				
				break;
			}
		}
		p=NULL;
	}
	
	for(i=0;i<m;i++)
	{
		printf("%s %d\n",wordcnt[i].s,wordcnt[i].cnt);
	}
	return m;
}
