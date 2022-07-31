#include<stdio.h>
#include<string.h>

struct student
{
	int id;
	char name[12];
	char gender;
	struct date
	{
		int year;
		int month;
		int day;
	}birthday;
	int score[3];
}stu[5]={	{001,"张三",'M',1991,5,21,90,91,92},
			{002,"李四",'F',1992,5,22,80,92,82},
			{003,"王五",'M',1993,5,23,70,93,71},
			{004,"赵六",'F',1994,5,24,70,94,91},
			{005,"陈七",'F',1995,5,25,850,95,96},
};


struct student2
{
	int id;
	char name[12];
	int score;
}s[5]={		{001,"张三",92},
			{002,"李四",82},
			{003,"王五",71},
			{004,"赵六",91},
			{005,"陈七",96},
};

int cmp(const void*a,const void*b)
{
	struct student2 *p=(struct student2 *)a;
	struct student2 *q=(struct student2 *)b;
	//return (q->score)-(p->score);
	return (*q).score<(*p).score?1:-1;
}
void my_sort(struct student2 *s,int n)
{
	int i=0;
	int j=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(s[j].score<s[j+1].score)
			{
				struct student2 temp={0};
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
}
int main()
{
	int i=0;
	//qsort(s,5,sizeof(struct student2),cmp);
	my_sort(s,5);
	for(i=0;i<5;i++)
	{
		printf("%d %s %d\n",s[i].id,s[i].name,s[i].score);
	}
	/*
	struct student *p=NULL;
	int i=0;
	int id=0;
	printf("请输入要查找的同学的信息的学号");
	scanf("%d",&id);
	p=stu;
	for(i=0;i<5;i++)
	{
		if(id==p->id)
		{
			printf("%03d %s %c %d年%d月%d日 %d %d %d\n",p->id,p->name,p->gender,\
				p->birthday.year,p->birthday.month,p->birthday.day,p->score[0],\
				p->score[1],p->score[2]);
			break;
		}
		p++;
	}
	i==5?printf("查无此人\n"):0;
	*/


	/*
	struct student stu1={"李四",1234,'M'};
	struct student stu2;
	struct student stu3;
	struct student stu[3];
	struct student* s;
	int i=0;
	strcpy(stu2.name,"zhangsan");
	stu2.id=9527;
	stu2.gender='F';
	printf("%d",sizeof(struct  student));
	//scanf("%s",stu3.name);
	//scanf("%d",&stu3.id);
	//scanf("%c",&stu3.gender);
	//puts(stu2.name);
	//printf("姓名%s\n学号%d\n性别%c\n",stu2.name,stu2.id,stu2.gender);
	//printf("\n%s %d %c",stu3.name,stu3.id,stu3.gender);
	
	s=stu;
	for(i=0;i<3;i++)
	{
		printf("请输入第%d个人的姓名 学号 性别",i+1);
		scanf("%s%d%c",s->name,&s->id,&s->gender);
		s++;
	}
	s=stu;
	for(i=0;i<3;i++)
	{
		printf("%s %d %c\n",s->name,s->id,s->gender);
		s++;
	}
	*/
	return 0;
}

