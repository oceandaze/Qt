#include<stdio.h>
#include<string.h>
sort(char* strings[], int n)//定义一个排序的函数
{
	char* temp;//定义用于交换的中间变量
	int i, j;//定义控制变量
	for (i = 0; i < n; i++)//外层循环
	{
		for (j = i + 1; j < n; j++)//内层循环
		{
			if (strcmp(strings[i], strings[j]) > 0)//比较两个字符
			{
				temp = strings[i];//交换字符位置
				strings[i] = strings[j];
				strings[j] = temp;
			}
		}
	}
}
void main()
{
	int n = 5;//定义一共有几个名字
	int i;//定义控制变量
	char** p;//定义指针的指针
	char* strings[] = { "赵小平","周芷若","宇文玥","南乔","楚小乔" };//定义字符串指针数组并初始化
	p = strings;//指针指向数组首地址
	printf("一共有5个名字，分别是：\n");//输出提示信息
	for (i = 0; i < n; i++)//遍历排序前的名字
	{
		printf("%s\n", strings[i]);//输出排序前的名字
	}
	sort(p, n);//调用排序函，将名字进行排序
	printf("按照姓名排序之后分别是：\n");//输出提示信息
	for (i = 0; i < n; i++)//遍历排序后的名字
	{
		printf("%s\n", strings[i]);//输出排序后的名字
	}
}