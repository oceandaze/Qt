#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<ctype.h>

char  *week[7]={"Sunday", "Monday", "Tuseday",
"Wednesday", "Thursday", "Friday", "Saturday" } ;
int find(char*str);
int main()
{
	//char*str[100]={0};
	char **p=NULL;
	//int a=0;
	//scanf("%s",str);
	//a=find(str);
	//a==0?a=7:0;
	//printf("����������%d\n",a);
	p=week;
	printf("1=%c\n",**(week+3));
	printf("2=%c\n",*week[1]+3);
	//printf("3=%s\n",week[1]);
	//printf("4=%s\n",week[2]);
	//printf("����������%s\n",*p);
	printf("����������%c\n",**(p+1));
	printf("����������%c\n",**p);
	//printf("����������%s\n",*(++p));
	//printf("����������%s\n",(*p)++);
	//printf("����������%c\n",*((*p)++));
	return 0;
}