
#include<stdio.h>
#include<string.h>

struct person
{
	char name[20];
	int count;
};

int main()
{
	struct person Person[3]={ {"����",0}, {"����",0}, {"����",0}};
	char name[10];
	int i,j;
	printf("�����볪Ʊ���̣�\n");
	for(i=0;i<10;i++)
	{
		scanf("%s",name);
		for(j=0;j<3;j++)
		{
			if(strcmp(Person[j].name,name)==0)
			{
				Person[j].count++;
			}
		}
	}
	
	for(i=0;i<3;i++)
	{
		printf("%s:%dƱ\n",Person[i].name,Person[i].count);
	}
	return 0;
}