#include<stdio.h>
#include<string.h>
#include<limits.h>

void getmaxmin();
void getMaxMin(int *arr,int n,int* max,int *min);
void inverse();
void reverse(int *arr,int n);
void sort();
void bubblesort(int *arr,int n);
void unique();
int *derepeat(int *arr,int n);
void insert();
void delet();
int halfFind(int *arr,int value,int n);
void selectSort(int * arr,int n);
void insertSort(int *arr,int n);
void halfSort(int *arr,int n);

int wordRevese(char*str,char str2[][100]);
int oneworldrevese(char*str,char str2[100][100]);
int Fibonacci(int n);
int fact(int n);
int main()
{
	//getmaxmin();//求数组最大值最小值
	/*指针求数组最值
	int arr[100]={3,4,2,6,7,4,9,12,1};
	int n=9;
	int *p=NULL;
	//int max=INT_MIN;
	//int min=INT_MAX;
	//getMaxMin(arr,n,&max,&min);
	//printf("max=%d min=%d",max,min);
	*/
	//inverse();//反转数组
	/*
	reverse(arr,n);
	for(p=arr;p<arr+n;p++)
	{
		printf("%d ",*p);
	}
	*/
	//sort();//冒泡排序
	//unique();//去重
	//insert();//插入元素
	//delet();//删除元素
	
	//int arr[100]={4,5,9,3,2,1,6,8};
	//int arr[100]={4,4,9,3,3,1,8,8};
	//int n=8;
	//int i=0;
	//int*p=NULL;
	//bubblesort(arr,n);
	//n=derepeat(arr,n);
	//for(p=arr;p<arr+n;p++)
	//{
	//	printf("%d ",*p);
	//}
	//int i=0;
	//int index=0;
	//index=halfFind(arr,2,n);
	//printf("%d",index);
	//halfSort(arr,n);
	//selectSort(arr,n);
	//insertSort(arr,n);
	//for(i=0;i<n;i++)
	//{
	//	printf("%d",arr[i]);
	//}
	/*

	*/
	//4
	/*
	
	*/
	//5
	/*
	char str[100]={"hello world"};
	char str2[100][100]={0};
	int n=0;
	int i=0;
	//n=wordRevese(str,str2);
	//n=oneworldrevese(str,str2);
	for(i=0;i<n;i++)
	{
		printf("%s ",str2[i]);
	}
	*/

//	int n=0;
	//n=Fibonacci(6);
	//n=fact(20);
	//printf("%d",n);
	char s[2]={"63"};
	printf("%d\n",s);
	return 0;

}
//递归实现菲波那切数列（1,1,2,3,5,8,13......）
int Fibonacci(int n)
{
	if(n==1) return 1;
	if(n==2) return 2;
	return n=Fibonacci(n-1)+Fibonacci(n-2);
}
//递归实现阶乘
int fact(int n)
{
	if(n==1)return 1;
	return n=n*fact(n-1);
}
	


//1.数组求最大值最小值
void getmaxmin()
{
	int i=0;
	int n=0;
	int max=0;
	int min=0;
	int arr[100]={0};
	printf("请确认要输入数字个数");
	scanf("%d",&n);
	printf("请输入%d个数",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<n;i++)
	{
		max<arr[i]?(max=arr[i]):0;
		min>arr[i]?(min=arr[i]):0;
	}
	printf("max=%d min=%d",max,min);
}
//使用指针求数组最大值最小值
void getMaxMin(int *arr,int n,int* max,int *min)
{
	int *p=NULL;
	for(p=arr;p<arr+n;p++)
	{
		*max=*max<*p?*p:*max;
		*min=*min>*p?*p:*min;
	}
}
//2.数组逆序
void inverse()
{
	int i=0;
	int j=0;
	int n=0;
	int arr[100]={0};
	int temp=0;
	printf("请确认要输入数字个数");
	scanf("%d",&n);
	printf("请输入%d个数",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
//使用指针逆序数组
void reverse(int *arr,int n)
{
	int*p=NULL;
	int*q=NULL;
	int t=0;
	for(p=arr,q=arr+n-1;p<q;p++,q--)
	{
		t=*p;
		*p=*q;
		*q=t;
	}
}
//3.数组排序(冒泡法)
void sort()
{
	int i=0;
	int j=0;
	int n=0;
	int arr[100]={0};
	int temp=0;
	printf("请确认要输入数字个数");
	scanf("%d",&n);
	printf("请输入%d个数",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}

void bubblesort(int *arr,int n)
{
	int*p=NULL;
	int*q=NULL;
	int t=0;
	int i = 0;
	for(p=arr;p<arr+n-1;p++ )
	{
		for(q=arr;q<arr+(arr+n-1-p);q++)
		{
			if(*q>*(q+1))
			{
				t=*q;
				*q=*(q+1);
				*(q+1)=t;
			}
		}
	}
}
//4.数组去重
void unique()
{
	int i=0;
	int j=0;
	int n=0;
	int arr[100]={0};
	int m=0;
	printf("请确认要输入数字个数");
	scanf("%d",&n);
	printf("请输入%d个数",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i]==arr[j])
			{
				break;
			}
		}
		if(j==m)
		{
			arr[m++]=arr[i];
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%d",arr[i]);
	}

}
int *derepeat(int *arr,int n)
{
	int *p=NULL;
	int *q=NULL;
	int *pos=arr;
	for(p=arr;p<arr+n;p++)
	{
		for(q=arr;q<pos;q++)
		{
			if(*p==*q)
			{
				break;
			}
		}
		if(q==pos)
		{
			*pos=*p;
			pos++;
		}
	}
	return pos-arr;
}
//5.数组插入元素（有序）
void insert()
{
	int i=0;
	int n=0;
	int arr[100]={0};
	int insertValue=0;
	printf("请确认要输入数字个数");
	scanf("%d",&n);
	printf("请输入%d个数",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("请输入要插入的数");
	scanf("%d",&insertValue);
	for(i=n-1;i>=0&&arr[i]>insertValue;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[i+1]=insertValue;
	n++;
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}



//6.元素删除
void delet()
{
	int i=0;
	int n=0;
	int m=0;
	int arr[100]={0};
	int len=0;
	printf("请确认要输入数字个数");
	scanf("%d",&n);
	printf("请输入%d个数",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("请输入将要删除的元素m");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(arr[i]!=m)
		{
			arr[len++]=arr[i];
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%d",arr[i]);
	}
}

//7.二分查找（有序）
int halfFind(int *arr,int value,int n)
{
	int left=0;
	int right=n-1;
	int mid=0;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]==value)
		{
			return mid;
		}
		else if(arr[mid]>value)
		{
			right=mid-1;
		}
		else 
		{
			left=mid+1;
		}
	}
	return -1;
}
//8.选择排序
void selectSort(int * arr,int n)
{
	int i=0;
	int j=0;
	int temp=0;
	int min=0;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
}
void selectsortP(int *arr,int n)
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
//9.插入排序
void insertSort(int *arr,int n)
{
	int i=0;
	int j=0;
	int temp=0;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0&&arr[j]>=temp;j--)
		{
			arr[j+1]=arr[j];
		}
		arr[j+1]=temp;
	}

}
void insertP(int *arr,int n)
{
	int*p=NULL;
	int*q=NULL;
	int t=0;
	for(p=arr;p<arr+n;p++)
	{
		t=*p;
		for(q=p-1;q>arr&&*q>t;q--)
		{
			*(q+1)=*q;
		}
		*(q+1)=t;
	}
}
//10.二分插入排序
void halfSort(int *arr,int n)
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



//单词逆序
int wordRevese(char*str,char str2[100][100])
{
	char*p=str;
	int i=0;
	int j=0;
	int n=0;
	char temp[100]={0};
	while(p=strtok(p," "))
	{
		strcpy(str2[n++],p);
		p=NULL;
	}
	for(i=0,j=n-1;i<j;i++,j--)
	{
		strcpy(temp,str2[i]);
		strcpy(str2[i],str2[j]);
		strcpy(str2[j],temp);
	}
	return n;
}
//单个单词逆序
int oneworldrevese(char*str,char str2[100][100])
{
	char*p=str;
	int i=0;
	int j=0;
	int k=0;
	int n=0;
	char c=0;
	while(p=strtok(p," "))
	{
		strcpy(str2[n++],p);
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
	return n;
}
//二维数组指针写法
int main3()
{
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	int m=3;int n=3;
	int (*p)[3]=NULL;//数组指针
	int *q=NULL;
	for(p=arr;p<arr+m;p++)
	{
		for(q=*p;q<*p+n;q++)
		{
			printf("%d\t",*q);
		}
		printf("\n");
	}
	return 0;
}