#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int id;
	char name[30];
	char gender;
	int score[3];
	int sum_score;
}s;
int n=0;

int CalSum(s*stu,int i)
{
	return stu[i].score[0]+stu[i].score[1]+stu[i].score[1];
}

int cmp(const void*a,const void*b)
{
	s*p=(s*)a;
	s*q=(s*)b;
	return p->sum_score<q->sum_score?1:-1;
}
int main()
{
	s stu[10]={0};
	FILE*fp=NULL;
	FILE*fq=NULL;
	int i=0;
	char t[100]={0};
	fp=fopen("test01.txt","r+");
	fq=fopen("test02.txt","w+");
	if(fp==NULL)
	{
		printf("文件不存在");
		return 0;
	}
	fgets(t,100,fp);
	while(!feof(fp))
	{
		fscanf(fp,"%d\t%s\t%c\t%d\t%d\t%d",&stu[i].id,stu[i].name,&stu[i].gender,&stu[i].score[0],\
			&stu[i].score[1],&stu[i].score[2]);
		stu[i].score[3]=CalSum(stu,i);
		i++;
		n=i-1;
	}
	fclose(fp);
	for(i=0;i<n;i++)
	{
		printf("%d %s %c %d %d %d %d\n",stu[i].id,stu[i].name,stu[i].gender,\
			stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].score[3]);
	}
	qsort(stu,n,sizeof(s),cmp);
	fputs("学号\t姓名\t总成绩\n",fq);
	for(i=0;i<n;i++)
	{
		fprintf(fq,"%02d\t%-6s\t%3d\n",stu[i].id,stu[i].name,stu[i].score[3]);
	}
	fclose(fq);
	return 0;
}