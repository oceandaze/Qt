#include<stdio.h>

struct Student								/*学生结构*/
{
	char cName[20];						/*姓名*/
	float fScore[3];							/*分数*/
}student={"SuYuQun",98.5f,89.0,93.5f};			/*定义变量*/

void Display(struct Student stu)					/*形参为结构体变量*/
{
	printf("-----信息如下-----\n");				/*提示信息*/
	printf("姓名: %s\n",stu.cName);			/*引用结构成员*/
	printf("语文: %.2f\n",stu.fScore[0]);
	printf("数学: %.2f\n",stu.fScore[1]);
	printf("英语: %.2f\n",stu.fScore[2]);
	/*计算平均分数*/
	printf("平均分:%.2f\n",(stu.fScore[0]+stu.fScore[1]+stu.fScore[2])/3);
}

int main()
{
	Display(student);						/*调用函数，结构变量作为实参进行传递*/
	return 0;
}
