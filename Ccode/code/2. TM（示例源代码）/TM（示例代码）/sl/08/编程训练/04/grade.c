#include <stdio.h>
int main()
{
	int i, j, s = 0,  course[3], array[3][5];  //定义变量和二维数组
	printf("请输入成绩：\n");
	for (i = 0; i < 3; i++)                                 //遍历二维数组行
	{
		for (j = 0; j < 5; j++)                            //遍历二维数组列
		{
			printf("array[%d][%d]=",i,j);
			scanf ("%d", &array[i][j]);                   //输出成绩
			s = s + array[i][j];                           //计算成绩
		}
		course[i] = s / 5;                                 //求每科的平均成绩
		s = 0;                                               //重新赋值
	}
	printf("数学的平均成绩是（取整数）:%d\n语文的平均成绩是（取整数）:%d\n英语的平均成绩是（取整数）:%d\n", course[0], course[1], course[2]);
	return 0;
}
