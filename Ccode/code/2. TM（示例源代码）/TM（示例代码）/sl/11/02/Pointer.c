#include<stdio.h>

struct Student									/*学生结构*/
{
	char cName[20];							/*姓名*/
	char cSex;								/*性别*/
	int iGrade;									/*年级*/
} student1={"HanXue",'W',3};						/*定义变量并设置初始值*/


int main()
{
	struct Student student2={"WangJiasheng",'M',3};	/*定义变量并设置初始值*/
	
	/*将第一个结构体中的数据输出*/
	printf("第一个学生信息:\n");
	printf("姓名: %s\n",student1.cName);
	printf("性别: %c\n",student1.cSex);
	printf("年级: %d\n",student1.iGrade);
	/*将第二个结构体中的数据输出*/
	printf("第二个学生信息:\n");
	printf("姓名: %s\n",student2.cName);
	printf("性别: %c\n",student2.cSex);
	printf("年级: %d\n",student2.iGrade);
	return 0;
}
