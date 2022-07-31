#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*next;
	
};

struct node*CreatHeadNode()
{
	struct node *p=(struct node*)malloc(sizeof(struct node));
	
	if(p==NULL)
	{
		exit(1);
	}
	p->next=NULL;
	return p;
}

void InsertHeadData(struct node*head,int data)
{
	struct node*newnode=CreatHeadNode();
	newnode->data=data;
	newnode->next=head->next;
	head->next=newnode;
}
void InsertTailData(struct node*head,int data)
{
	struct node*newnode=CreatHeadNode();
	newnode->data=data;
	newnode->next=NULL;
	while(head->next)
	{
		head=head->next;
	}
		head->next=newnode;
}
void PrintNodeData(struct node*head)
{
	head=head->next;
	while(head)
	{
		printf("%d\n",head->data);
		head=head->next;
	}
}

void FreeHeap(struct node*head)
{
	struct node*tmp=head->next;
	while(tmp)
	{
		free(head);
		head=tmp;
		tmp=tmp->next;
	}
	free(head);
}

void DeleteData(struct node*head,int data)
{
	struct node*p=head;
	struct node*q=head;
	while(p!=NULL)
	{
		if(p->data==data)
		{
			q->next=p->next;
			free(p);
			p=q->next;
			continue;
		}

	q=p;
	p=p->next;
	}
}
void bubbleSort(struct node*head)
{
	struct node*p=NULL;
	struct node*q=NULL;
	for(q=head->next;q->next!=NULL;q=q->next)
	{
		for(p=head->next;p->next!=NULL;p=p->next)
		{
			if(p->data>p->next->data)
			{
				int temp=p->data;
				p->data=p->next->data;
				p->next->data=temp;
			}
		}
	}
}


void unique(struct node*head,int n)
{
	struct node*p=head;
	struct node*q=head->next;
	while(q!=NULL)
	{
		if(p->data==q->data)
		{
			p->next=q->next;
			free(q);
			q=p->next;
			continue;
		}
		p=q;
		q=q->next;
	}
	

}


void deleteDuplicates(struct node* head){
    struct node*dummy=head;
    struct node*p1=head;
    struct node*p2=p1->next;
    struct node*temp=NULL;
    while(p2->next)
    {   
        if(p2->data==p2->next->data)
        {
            p2=p2->next;
        }
        else if(p1->next!=p2)
        {
            p1->next=p2->next;
            p2=p1->next;
        }
        else
        {
            p1=p1->next;
            p2=p1->next;
        }
    }
    
}
int main()
{
	/*
	struct node a;
	struct node b;
	struct node c;
	struct node *p;

	a.data=1;
	b.data=2;
	c.data=3;
	a.next=&b;
	b.next=&c;
	c.next=NULL;
	p=&a;
	
	while(p)
	{
		printf("%d\n",p->data);
		p=p->next;
	}
*/
	int i=0;
	int len=0;
	struct node *headNode=CreatHeadNode();
	//int arr[9]={3,2,5,4,6,1,7,9,8};
	int arr[6]={1,1,1,2,2,3};
	len=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<len;i++)
	{
		InsertTailData(headNode,arr[i]);
	}
	//bubbleSort(headNode);
	//unique(headNode,len);
	deleteDuplicates(headNode);
	PrintNodeData(headNode);
	FreeHeap(headNode);
	return 0;
}


//结构体选择排序
void selectsort(struct node*head,int n)
{
	struct node*p=NULL;
	struct node*q=NULL;
	int temp=0;
	for(p=head->next;p->next!=NULL;p=p->next)
	{
		for(q=p->next;q!=NULL;q=q->next)
		{
			if(p->data>q->data)
			{
				temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
		}
	}

}



void seletesort(struct node*head)
{
	struct node*p=NULL;
	struct node*q=NULL；
	int temp=0;
	for(p=head->next;p->next!=NULL;p=p->next)
	{
		for(q=p->next;q!=NULL;q=q->next)
		{
			if(p->data>q->data)
			{
				temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
		}
	}
}