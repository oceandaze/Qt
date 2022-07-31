#include<stdio.h>

int main()
{

	char hero[25] = "雨石,玉轩,团子";              //定义字符数组保存男主角名字
	char lady[25] = "小点,紫轩,若美";               //定义字符数组保存女主角名字
	int i;                                           //循环控制变量
	printf("这部电影的男主角分别是：\n");           //输出信息提示
	for (i = 0; i<25; i++)                         //进行循环
	{
	    printf("%c", hero[i]);                   //采用%c格式输出男主角名字
	}
	printf("\n");                                  //换行输出
	printf("这部电影的女主角分别是：\n");          //输出信息提示
	printf("%s", lady);                           //采用%s格式输出女主角名字
	printf("\n");                                  //换行输出
	return 0;                                       //程序结束
}
