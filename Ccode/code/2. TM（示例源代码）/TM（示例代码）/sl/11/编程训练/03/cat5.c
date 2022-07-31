#include<stdio.h>
struct Cat                                          //定义猫的结构体
{
	char cName[10];                              //喵名
	int age;	                                     //喵龄
	float weight;                                //体重
	char sex[10];                                    //性别
} cat[5] = { {"糖块",1,4.9f,"公"},                 //定义数组并初始化
			   {"小点",1,3.5f,"公"},
			   {"团团",1,3.9f,"母"},
			   {"琉球",1,3.7f,"公"},
			   {"点点",1,3.3f,"母"} };

int main()                                       //主函数main
{
	int i;                                          //循环控制变量
	for (i = 0; i < 5; i++)                         //使用for进行循环
	{
		printf("第%d只喵:\n", i + 1);
		//输出结构体数组中的元素数据
		printf("喵名： %s,喵龄：%d元,喵的体重：%.2f,喵的性别：%s\n", cat[i].cName, cat[i].age, cat[i].weight, cat[i].sex);
		printf("\n");                             //空格行
	}
	return 0;                                      //程序结束
}
