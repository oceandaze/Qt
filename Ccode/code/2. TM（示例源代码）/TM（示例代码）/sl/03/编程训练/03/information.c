#include<stdio.h>
int main()
{
	int age;//表示年龄
	float height,weight;//表示身高、体重
	char sex;//表示性别
	age=31;
	height=1.68f,weight=59.4f;
	sex='M';
	printf("大毛基本信息如下：\n");
	printf("年龄是：%d岁,性别是：%c\n",age,sex);
	printf("身高是：%f米,体重是：%f千克\n",height,weight);
	return 0;
}