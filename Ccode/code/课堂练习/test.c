#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<ctype.h>

struct student
{
	int num;
	char s[10];
	
}stu[10];




void halfSort(int * arr,int n);
int main1()
{
	int arr[100]={4,5,9,3,2,1,6,8};
	int n=8;
	int i=0;
	halfSort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}

	return 0;
}
//二分查找（有序）
int halfFind(int * arr,int value,int n)
{
	int left=0;
	int right=n-1;
	int mid=0;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]==value)
			return mid;
		else if(arr[mid]>value)
			right=mid-1;
		else 
			left=mid+1;
	}
	return -1;
}


//二分插入排序

void halfSort(int * arr,int n)
{
	int i=0;
	int j=0;
	int left=0;
	int right=0;
	int mid=0;
	int temp=0;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		left=0;
		right=i-1;
		while(left<=right)
		{
			mid=(left+right)/2;//mid=left+(right-left)/2
			if(arr[mid]>temp)
			{
				right=mid-1;
			}
			else
			{
				left=mid+1;
			}
		}
		for(j=i-1;j>=left;j--)
		{
			arr[j+1]=arr[j];
		}
		arr[left]=temp;
	}

}

//对角线之和
int main2()
{

	int arr[5][5]={0};
	int i=0; 
	int j=0;
	int sum1=0;
	int sum2=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			arr[i][j]=j+1;
		}
	}
	for(i=0;i<5;i++)
	{
		sum1=sum1+arr[i][i];
		sum2=sum2+arr[i][4-i];
	}
	printf("%d %d",sum1,sum2);
	return 0;
}

void mystrcat(char*str1,char*str2);
void fun(int *p,int*q);
void mystrcat1(char*str1,char*str2);
int maxlong(char*str);
int getlongst(char*str);
int judge(char*str);
int yuanlen(char*str);
char  *week[7]={"Sunday", "Monday", "Tuseday",
"Wednesday", "Thursday", "Friday", "Saturday" } ;
int find(char*str);
void strsort(char*str);
int main()
{
	//int i=0;
	//char str[10]={'h','e','l','l','o'};
	//sizeof(5.9);
	//printf("%d\n",sizeof('4'));
	//puts(str);
	//char src[100]={"compu"};
	//char ret[100]={"computer"};
	//printf("%d\n",strcmp(src,ret));
	//puts(src);
	/*
	int m=3;
	int n=5;
	fun(&m,&n);
	printf("%d %d",m,n);
	*/
	//char str[100]="hello world";
	//char str2[100]={"ooooo"};
	//mystrcat1(str,str2);
	//puts(str);
	//int arr[2][3]={1,2,3,4,5,6};
	//int*p=(int*)(arr+1);
	//printf("%d",*(p-1));
	//printf("%p\n%p",arr,arr+1);
	/*
	char str[]={"1a124aa12345a"};
	int n=0;
	n=getlongst(str);
	printf("%d\n",n);
	*/
	/*
	char str[]={"ddfgh"};
	int n=0;
	n=yuanlen(str);
	printf("%d",n);
	*/
	//char*str[100]={0};
	//char **p=NULL;
	//int a=0;
	//scanf("%s",str);
	//a=find(str);
	//a==0?a=7:0;
	//printf("这天是星期%d\n",a);
	//p=week;
	//printf("这天是星期%p\n",week[0]);
	//printf("这天是星期%s\n",*p);
	//printf("这天是星期%s\n",*p++);
	//printf("这天是星期%s\n",*(p++));
	//printf("这天是星期%s\n",*(++p));
	//printf("这天是星期%s\n",(*p)++);
	//printf("这天是星期%c\n",*((*p)++));
	char str[]={"CCBABAC"};
	strsort(str);
	return 0;
}
void strsort(char*str)
{
	int i=0;
	int j=0;
	int len=strlen(str);
	int hash[123]={0};
	int alpha[][2]={0};
	int m=0;
	for(i=0;i<len;i++)
	{
		hash[str[i]]+=1;
	}
	for(i=65;i<123;i++)
	{
		if(hash[i]>0)
		{
			alpha[m][0]=i;
			alpha[m][1]=hash[i];
			m++;
		}
	}


}
int find(char*str)
{
	int i=0;
	int j=0;
	int len=sizeof(week)/sizeof(week[0]);
	for(i=0;i<len;i++)
	{
		if(strcmp(str,week[i])==0)
		{
			return i;
		}
	}
	return -1;
}
int yuanlen(char*str)
{
	int len=strlen(str);
	int i=0;
	int m=0;
	int max=0;
	char *str2="aeiouAEIOU";
	for(i=0;i<len;i++)
	{
		if(strchr(str2,str[i]))
		{
			m++;
		}
		else
		{
			m=0;
		}
		max<m?max=m:0;
		
	}
	return max;
	
}
int maxlong(char*str)
{
	int i=0;
	int max=INT_MIN;
	int left=0;
	int right=0;
	int flag=0;
	int len=strlen(str);
	for(i=0;i<len-1;i++)
	{
		if(flag==0&&isalpha(str[i])&&isdigit(str[i+1]))
		{
			left=i;
			flag=1;
		}
		else if(flag==1&&isalpha(str[i])&&isdigit(str[i+1]))
		{
			left++;
		}
		else if(flag==1&&isalpha(str[i])&&isalpha(str[i+1]))
		{
			right=i;
			max<(right-left)?max=right-left:0;
			flag=0;
		}
		else if(flag==1&&i==len-2&&isdigit(str[len-1]))
		{
			right=len;
			max<(right-left)?max=right-left:0;
			flag=0;
		}
		else if(flag==1&&i==len-2&&isalpha(str[len-1]))
		{
			right=len-1;
			max<(right-left)?max=right-left:0;
			flag=0;
		}
		else if(flag==0&&isalpha(str[i])&&isalpha(str[i+1]))
		{
			right=i+1;
			max<(right-left)?max=right-left:0;
			flag=0;
		}

	}
	return max;
}

int getlongst(char*str)
{
	char*p=NULL;
	char*q=NULL;
	char*pos=NULL;//记录字母位置用
	int maxlen=0;//记录最大合法子串长度用
	if(str==NULL||strlen(str)==0||judge(str))//判断传入字符串合法性，如果str无指向，或者为空或者全为字母或数字直接返回-1
	{
		return -1;
	}
	for(p=str,q=str;*q!='\0';q++)//从str初始位置开始遍历字符串，p和q滑动窗口起始一样，q每次自增1
	{
		if(pos==NULL&&isalpha(*q))//从头开始pos第一次记录字母的位置，只在第一次遇见字母时进入
		{
			pos=q;//将第一个字母的位置记录给pos
		}
		else if(isalpha(*q))//遍历遇见数字直接跳过，以后每一次遇见字母进入条件
		{
			p=pos+1;//更新p的位置，将其置于上一个字母的下一位，以跳过上一个字母保证p和q之间只有一个当前字母存在
			pos=q;//pos记录最新一个字母的位置
		}
		maxlen=maxlen<q-p+1?q-p+1:maxlen;//每一次计算p和q之间的距离加1（比如2到4是距离是234三个数，但是4-2=2，所以要加1），如果他们的距离是最大值就保存到maxlen中
		
	}
	return maxlen;//遍历结束找到最长合法子串长度返回

}
int judge(char*str)
{
	int i=0;
	int cnt=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(isdigit(str[i]))
		{
			cnt++;
		}
	}
	return cnt==strlen(str)||cnt==0;
}
void fun(int *p,int*q)
{
	int t=0;
	t=*p;
	*p=*q;
	*q=t;
}


void mystrcat(char*str1,char*str2)
{
	int i=0;
	int m=strlen(str1);
	for(i=0;str2[i]!='\0';i++)
	{
		str1[m++]=str2[i];
	}
	str1[m]='\0';
}

int mystrcmp(char*str1,char*str2)
{
	while(*str1++==*str2++);//结束条件有问题
	return *str1-*str2;
}

void mystrcat1(char*str1,char*str2)
{
	int m=strlen(str1);
	char*p=str2;
	int n=strlen(str2);

	for(;p<str2+n;p++)
	{
		*(str1+m)=*p;
		m++;
	}
}

void selectsore(int *arr,int n)
{
	int*p=NULL;
	int*q=NULL;
	int*t=NULL;
	int*temp;
	for(p=arr;p<arr+n-1;p++)
	{
		t=p;
		for(q=p+1;q<arr;q++)
		{
			if(*q<*t)
			{
				t=q;
			}
		}
		temp=*p;
		*p=*t;
		*t=temp;
	}
}

void selectSort(int*arr,int n)
{
	int*p=NULL;
	int*q=NULL;
	int*min =NULL;
	int temp=0;
	for(p=arr;p<arr+n;p++)
	{
		min=p;
		for(q=p+1;q<arr+n;q++)
		{
			if(*q<*min)
			{
				min=q;
			}
		}
		temp=*p;
		*p=*min;
		*min=temp;
	}

}

int cmp(const void*a,const void*b)
{
	struct student *p=(struct student*)a;
	struct student *q=(struct student*)b;
	return p->num<q->num?1:-1;
}
