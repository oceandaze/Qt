#include<stdio.h>
#include<ctype.h>
#include<string.h>

void comp(char * str1,char*str2);
void decomp(char*src,char*out);
void bigNumAdd(char*num);
void addOne(char*str);
void reverse(char * str);
void combineNum(int *arr,int n,int *arr2);
int main()
{
	/*1、压缩
	//char src[1000]={"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbcccdddeeew"};
	char src[1000]={"abbccccdde"};
	char res[1000]={0};
	comp(src,res);
	puts(res);
	*/
	//2、解压
	/*
	char src[1000]={"a3b4"};
	char rec[1000]={0};

	decomp(src,rec);
	puts(rec);
	*/

	//3、大数相加
	/*
	char num[100]={"99999999"};
	//bigNumAdd(num);
	reverse(num);
	addOne(num);
	reverse(num);
	puts(num);
	*/
	
	return 0;
}
//字符串压缩
void comp(char * str1,char*str2)
{
	int i=0;
	int j=0;
	int cnt=0;
	for(i=0;str1[i]!='\0';i++)
	{
		cnt=0;
		for(j=i;str1[j]!='\0';j++)
		{
			if(str1[i]==str1[j])
			{
				cnt++;
			}
			else
			{
				break;
			}
		}
		if(cnt<=2)
		{
			//str2[m++]=str1[i];
			str2[strlen(str2)]=str1[i];
		}
		else if(2<cnt&&cnt<10)
		{
			//str2[m++]=str1[i];
			//itoa(cnt,str2+m++,10);
			sprintf(str2+strlen(str2),"%c%d",str1[i],cnt);
			i=i+cnt-1;
		}
		else if(10<=cnt&&cnt<100)
		{
			//str2[m++]=str1[i];
			//itoa(cnt,str2+m,10);
			sprintf(str2+strlen(str2),"%c%d",str1[i],cnt);
			//m=m+2;
			//itoa(cnt%10,str2+m++,10);
			i=i+cnt-1;
		}
		else if(100<=cnt&&cnt<1000)
		{
			//str2[m++]=str1[i];
			//itoa(cnt,str2+m,10);
			sprintf(str2+strlen(str2),"%c%d",str1[i],cnt);
			//m=m+3;
			i=i+cnt-1;
		}
	}
}

//字符串解压
/*
a1c3
aa4

  aab3c4
  aabbbcccc

*/

void decomp(char*src,char*out)
{
	int i=0;
	int cnt=0;
	for(i=0;i<=strlen(src);i++)
	{
		
		if(isdigit(src[i]))
		{
			cnt=cnt*10+src[i]-'0';
		}
		else
		{
			if(cnt!=0)
			{
				memset(out+strlen(out),out[strlen(out)-1],cnt-1);
				cnt=0;
			}
			out[strlen(out)]=src[i];
		}
	}
	
}

//大数加1
/*
输入“10”
输出“11”
输入“1111111111111111”
输出“1111111111111112”
输入“999”
输出“1000”
*/

void bigNumAdd(char*num)
{
	int i=0;
	int n=0;
	char temp[100]={0};
	for(i=1;i<=strlen(num);i++)
	{
		strncpy(temp,num+strlen(num)-i,1);
		sscanf(temp,"%d",&n);
		if(n+1<=9)
		{
			n=n+1;
			sprintf(temp,"%d",n);
			strncpy(num+strlen(num)-i,temp,1);
			break;
		}
		else
		{
			n=(n+1)%10;
			sprintf(temp,"%d",n);
			strncpy(num+strlen(num)-i,temp,1);
		}
	}
	if(i>strlen(num))
	{
		strncpy(num,"1",1);
		strncpy(num+strlen(num),"0",1);
	}	
}


void addOne(char*str)
{
	int carry=1;
	int i=0;
	for(i>0;str[i]!='\0'&&carry==1;i++)
	{
		int t=str[i]+carry-'0';
		carry=t/10;
		str[i]=t%10+'0';
	}
	if(carry==1)
	{
		str[strlen(str)]='1';
	}
}

void reverse(char * str)
{
	int i=0;
	int j=0;
	char temp=0;
	for(i=0,j=strlen(str)-1;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
}

