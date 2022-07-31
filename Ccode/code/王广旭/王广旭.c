#include <stdio.h>

/*1 写一个程序，读入一个数n,(0<n<10)
   输出如下图形   A
                A B A
              A B C B A
            A B C D C B A
			*/
/*
int main1()
{
	int n=0;
	int i=0;
	int j=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			if(j<=i)
			{
				printf("%c",'A'+j-1);
			}
			else
			{
				printf("%c",'A'+2*i-j-1);
			}
		}
		printf("\n");
		
	}
	return 0;
}
*/
/*
2 写一个程序。输入一个长度小于40的字符串到数组s，再将s中的字符串
逆序连接到原始串的后面。例如：输入"ABCD"，则字符串t为"ABCDDCBA"。
即实现函数 char *　fun(char * str)
*/
/*
char*fun(char*str)
{
	char *t=(char*)malloc(sizeof(char)*80);
	int i=0;
	int m=0;
	for(i=0;str[i]!='\0';i++)
	{
		t[m]=str[i];
		m++;
	}
	for(i=m-1;i>=0;i--)
	{
		t[m++]=str[i];
	}
	t[m]='\0';
	return t;
}
int main2()
{
	char s[40]={"ABCD"};
	char *t=NULL;
	t=fun(s);
	printf("%s",t);
	return 0;
}
*/
/*

3  编程实现如下表达式前50项目的和
1*2 + 2* 3+ 3 * 4+ 4*5 +……
*/

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

int main3()
{
	int sum=0;
	//sum=GetSum();
	sum=getsum(10);
	printf("%d",sum);
	return 0;
}
*/
/*
4  编程实现将已经升序排列好的两个字符串A和B,按升序归并到一个字符串C中。
*/
/*
int main4()
{
	char A[100]={"abcde"};
	char B[100]={"cefgh"};
	char C[200]={0};
	int i=0;
	int j=0;
	int len=0;
	strcpy(C,A);
	strcat(C,B);
	len =strlen(C);
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1-i;j++)
		{
			if(C[j]>C[j+1])
			{
				char temp=C[j];
				C[j]=C[j+1];
				C[j+1]=temp;
			}
		}
	}

	printf("%s",C);
	return 0;
}
*/



/*
5  编写程序。输入100个数，把正数放到数组的前端，负数放到数组的后端。零放到中间。
*/

int main()
{
	int arr[100]={2,4,1,-1,-3,-2,0};
	int brr[100]={0};
	int i=0;
	int m=0;
	int n=6;
	for(i=0;i<7;i++)
	{
		//printf("请输入一个数");
		//scanf("%d",&arr[i]);
		if(arr[i]>0)
		{
			if(m==0)
			{
				brr[m]=arr[i];
			}
			else if(arr[i]<brr[m-1])
			{

				int temp=brr[m-1];
				brr[m-1]=arr[i];
				brr[m]=temp;
			}
			else
			{
				brr[m]=arr[i];
			}
			m++;
		}
		else if(arr[i]<0)
		{
			if(n==6)
			{
				brr[n]=arr[i];
			}
			else if(arr[i]<brr[n+1])
			{
				int temp=brr[n+1];
				brr[n+1]=arr[i];
				brr[n]=temp;
			}
			else
			{
				brr[n]=arr[i];
			}
			n--;
		}
	}

	for(i=0;i<7;i++)
	{
		printf("%d",brr[i]);
	}
	return 0;
}

/*
6  编写一个函数，实现两个链表按数值域（一个整形数）由大到小合并的程序。
*/
/*
typedef struct LinkList
{
	int val;
	int next;
}List;

void BubbleList(List*head)
{
	List*p=NULL;
	List*q=NULL;

	for(p=head;p->next!=NULL;p=p->next)
	{
		for(q=head;q->next!=NULL;q=q->next)
		{
			if(q->val<q->next->val)
			{
				int tmp=q->val;
				q->val=q->next->val;
				q->next->val=tmp;
			}
		}
	}
}
List* combLinkList(List*head1,List*head2)
{
	List*p=head1;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=head2;
	BubbleList(head1);
	return head1;
}
int main6()
{
	return 0;
}
*/