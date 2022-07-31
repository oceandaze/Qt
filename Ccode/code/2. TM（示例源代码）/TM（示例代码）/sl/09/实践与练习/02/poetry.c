/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   为“和尚”写诗
*/
#include<stdio.h>                    //包含头文件
void poetry();                      //声明函数

int main()
{
	poetry();                         //调用情书函数
	return 0;                        //程序结束
}


void poetry()                         //自定义情书函数
{
	printf("\n空门有路不知处\n");     //输出情书内容
	printf("头白齿黄犹念经\n");
	printf("何年饮着声闻酒\n");
	printf("迄至如今醉未醒\n");
}
