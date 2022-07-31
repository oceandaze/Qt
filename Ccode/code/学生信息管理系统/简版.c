#include<stdio.h>
#include<stdlib.h>
#define N 30
int n=0;
struct student
{
	int id;
	char name[30];
	char sex;
	struct date
	{
		int year;
		int month;
		int day;
	}birthday;
	double score[5];
}stu[N];//={
	//{0001,"小华",'M',1991,3,6,90,60,80,230,76},
	//{0002,"小明",'M',1992,4,30,70,70,70,210,70},
	//{0003,"小红",'F',1993,5,1,80,80,80,240,80}
//};
void ShowData();
void AddStudentData();
double CalScoreSum(int n);
double CalScoreAvg(int n);
void DelStudentData();
void ModStudentData(int id);
int ShowOneStudentData(int id);
void SortStudentScore();
void SortStudentBirthday();
int cmpscore(const void*a,const void*b);
int cmp(const void*a,const void*b);
void InfoRead();
void InfoWrite();
int main()
{
	int id=0;
	int function=0;
	InfoRead();
	while(1)
	{
		printf("\n\n请选择你要使用的功能\n");
		printf("退出程序，请输入0，然后回车！\n\n");
		printf("录入信息，请输入1，然后回车！\n\n");
		printf("删除信息，请输入2，然后回车！\n\n");
		printf("修改信息，请输入3，然后回车！\n\n");
		printf("查询信息，请输入4，然后回车！\n\n");
		printf("总分排序，请输入5，然后回车！\n\n");
		printf("生日排序，请输入6，然后回车！\n\n");
		
		printf("显示全部，请输入8，然后回车！\n\n");
		scanf("%d",&function);
		switch (function)
		{
		case 0:
			InfoWrite();
			exit(0);
		case 1:
			AddStudentData();
			break;
		case 2:
			DelStudentData();
			break;
		case 3:
			printf("请输入你要修改信息的学生的学号\n");
			scanf("%d",&id);
			ModStudentData(id);
			break;
		case 4:
			printf("请输入你要查询信息的学生的学号\n");
			scanf("%d",&id);
			ShowOneStudentData(id);
			//SerStudentData();
			break;
		case 5:
			SortStudentScore();
			ShowData();
			break;
		case 6:
			SortStudentBirthday();
			ShowData();
			break;
		case 7:
			
			break;
		case 8:
			ShowData();
			break;
		default:
			printf("请输入正确的功能编号！！！\n\n");
		}
	}
	return 0;
}

void InfoRead()
{
	FILE*fp=NULL;
	int i=0;
	fp=fopen("StudentInfo.txt","r+");
	if(fp==NULL)
	{
		printf("文件不存在");
	}
	while(!feof(fp))
	{
		fscanf(fp,"%d %s %c %d %d %d %lf %lf %lf %lf %lf",\
		&stu[i].id,stu[i].name,&stu[i].sex,&stu[i].birthday.year,&stu[i].birthday.month,\
		&stu[i].birthday.day,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2],\
		&stu[i].score[3],&stu[i].score[4]);
		i++;
		n=i-1;
	}
	fclose(fp);
}
void InfoWrite()
{
	FILE*fp=NULL;
	int i=0;
	fp=fopen("StudentInfo.txt","w+");
	if(fp==NULL)
	{
		printf("文件不存在");
	}
	for(i=0;i<n;i++)
	{
		fprintf(fp,"%04d %s %c %d %d %d %5.1lf %5.1lf %5.1lf %5.1lf %5.1lf\n",\
				stu[i].id,stu[i].name,stu[i].sex,stu[i].birthday.year,stu[i].birthday.month,\
				stu[i].birthday.day,stu[i].score[0],stu[i].score[1],stu[i].score[2],\
				stu[i].score[3],stu[i].score[4]);
	}
	fclose(fp);
}
int ShowOneStudentData(int id)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(stu[i].id==id)
		{
			printf("%04d %-6s %c %4d %02d %02d %5.1lf %5.1lf %5.1lf %5.1lf %5.1lf\n",\
				stu[i].id,stu[i].name,stu[i].sex,stu[i].birthday.year,stu[i].birthday.month,\
				stu[i].birthday.day,stu[i].score[0],stu[i].score[1],stu[i].score[2],\
				stu[i].score[3],stu[i].score[4]);
		}
			return i;
	}
	return i;
}

void ShowData()
{
	int i=0;
	printf("目前已录入学生数据\n");
	for(i=0;i<n;i++)
	{
		printf("%04d %-6s %c %4d %02d %02d %5.1lf %5.1lf %5.1lf %5.1lf %5.1lf\n",\
		stu[i].id,stu[i].name,stu[i].sex,stu[i].birthday.year,stu[i].birthday.month,\
		stu[i].birthday.day,stu[i].score[0],stu[i].score[1],stu[i].score[2],\
		stu[i].score[3],stu[i].score[4]);
	}
}
void AddStudentData()
{
	int i=0;
	
	printf("请输入学生的学号 姓名 性别 生日 语文成绩 数学成绩 英语成绩\n");
	scanf("%d %s %c %d %d %d %lf %lf %lf",\
	&stu[n].id,stu[n].name,&stu[n].sex,&stu[n].birthday.year,&stu[n].birthday.month,\
	&stu[n].birthday.day,&stu[n].score[0],&stu[n].score[1],&stu[n].score[2]);

	stu[n].score[3]=CalScoreSum(n);
	stu[n].score[4]=CalScoreAvg(n);
	n=n+1;
}
double CalScoreSum(int n)
{
	double sum=0;
	return sum=stu[n].score[0]+stu[n].score[1]+stu[n].score[2];	
}
double CalScoreAvg(int n)
{
	double aver=0;
	return aver=CalScoreSum(n)/3;
}
void DelStudentData()
{
	int id=0;
	int i=0;
	int j=0;
	printf("请输入你要删除的学生学号");
	scanf("%d",&id);
	for(i=0;i<n;i++)
	{
		if(stu[i].id==id)
		{
			for(j=i;j<n-1;j++)
			{
				stu[j]=stu[j+1];
			}
			break;
		}
	}
	n=n-1;
}

void ModStudentData(int id)
{
	char go_on; 
	int item_index=0;
	int index=-1;
	printf("你要修改信息的学生的原信息\n");
	index=ShowOneStudentData(id);	
	printf("请输入要修改的字段序号，学号：1  ,姓名：2  ,性别：3  ,生日: 4  ,\
语文成绩：5  ,数学成绩：6  ,英语成绩：7\n");
	scanf("%d",&item_index);
	switch(item_index)
	{
	case 1:
		printf("请输入学号字段新的值");
		scanf("%d",&stu[index].id);
		id=stu[index].id;
		break;
	case 2:
		printf("请输入姓名字段新的值");
		scanf("%s",stu[index].name);
		break;
	case 3:
		printf("请输入性别字段新的值");
		scanf("\n%c",&stu[index].sex);
		break;
	case 4:
		printf("请输入生日字段新的值(年 月 日空格隔开，回车结束)");
		scanf("%d%d%d",&stu[index].birthday.year,&stu[index].birthday.month,&stu[index].birthday.day);
		break;
	case 5:
		printf("请输入语文字段新的值");
		scanf("%lf",&stu[index].score[0]);
		break;
	case 6:
		printf("请输入数学字段新的值");
		scanf("%lf",&stu[index].score[1]);
		break;
	case 7:
		printf("请输入英语字段新的值");
		scanf("%lf",&stu[index].score[2]);
		break;
	}
	if(item_index==5||item_index==6||item_index==7)
	{
		stu[index].score[3]=CalScoreSum(index);
		stu[index].score[4]=CalScoreAvg(index);
	}
	printf("修改成功！新的学生信息如下：\n");
	//修改后输出学生信息 
	ShowOneStudentData(id);
	printf("是否继续修改该学生信息？继续请输入y,返回主菜单输入n\n");
	scanf("%s",&go_on);
	if(go_on=='y') 
		ModStudentData(id);
}
int cmpscore(const void*a,const void*b)
{
	struct student*p1=(struct student*)a;
	struct student*p2=(struct student*)b;
	return p1->score[4]<p2->score[4]?1:-1;
}
void SortStudentScore()
{
	qsort(stu,n,sizeof(struct student),cmpscore);
}

int cmp(const void*a,const void*b)
{
	struct student*p1=(struct student*)a;
	struct student*p2=(struct student*)b;

	if(p1->birthday.year<p2->birthday.year)
	{
		return 1;
	}
	else if(p1->birthday.year>p2->birthday.year)
	{
		return -1;
	}
	else
	{
		if(p1->birthday.month<p2->birthday.month)
		{
			return 1;
		}
		else if(p1->birthday.month>p2->birthday.month)
		{
			return -1;
		}
		else
		{
			if(p1->birthday.day<p2->birthday.day)
			{
				return 1;
			}
			else if(p1->birthday.day>p2->birthday.day)
			{
				return -1;
			}
		}
	}
	return 0;
}

void SortStudentBirthday()
{
	qsort(stu,n,sizeof(struct student),cmp);
}