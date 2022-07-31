#include<stdio.h>
#include <stdlib.h>
int main()
{
	struct stu
	{
		int num;
		char* name;
		char sex;
		float score;
	}*ps;
	ps = (struct stu*)malloc(sizeof(struct stu));
	ps->num = 102;
	ps->name = "¹·µ°";
	ps->sex = 'M';
	ps->score = 62.5;
	printf("Number=%d\nName=%s\n",ps->num,ps->name);
	printf("Sex=%c\nScore=%.2f\n", ps->sex, ps->score);
	free(ps);
	return 0;
}