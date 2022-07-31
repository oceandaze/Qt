#include<stdio.h>

struct cat
{
	char cName[10];                              //喵名
	int age;	                                     //喵龄
	float weight;                                //体重
	char sex[10];                                    //性别
}cat1 = { "糖块",1,4.9f,"公" };                      //定义变量并设置初始值

int main()
{
	printf("喵名:%s\n", cat1.cName);     
	printf("喵龄:%d\n", cat1.age);     
	printf("喵体重:%.2f\n", cat1.weight);
	printf("喵的性别:%s\n", cat1.sex);   
	
	return 0;
}
