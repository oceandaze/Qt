/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   模拟12306抢票系统
*/
#include<stdio.h>

int ticket = 99;                      //当前车票剩余数量

void City1();	                           //声明函数，代表上海12306系统
void City2();	                    //声明函数，代表北京12306系统
void City3();	                             //声明函数，代表深圳12306系统
void ChangeTicket();                        //更改系统的票数

int main()
{
	printf("\n始发地：上海  目的地：长春  时间：2021年4月10日16：20出发\n");
	//先显示票数改变之前的数值
	printf("3个城市剩余的票数分别为：\n");
	City1();	                        //显示上海12306系统票数
	City2();	                             //显示北京12306系统票数
	City3();	                          //显示深圳12306系统票数
	ChangeTicket();//调用函数，改变系统票数
				   //显示提示，显示修改后的票数
	printf("我抢到一张票之后3个城市剩余的票数分别为：\n");
	City1();	                                   //显示上海12306系统票数
	City2();	                                  //显示北京12306系统票数
	City3();	                                 //显示深圳12306系统票数
	return 0;
}
//定义上海12306系统
void City1()
{
	printf("上海的12306系统剩余票数: %d张\n", ticket);
}
//定义北京12306系统
void City2()
{
	printf("北京的12306系统剩余票数: %d张\n", ticket);
}
//定义深圳12306系统
void City3()
{
	printf("深圳的12306系统剩余票数: %d张\n", ticket);
}
//定义更改12306系统票数
void ChangeTicket()
{
	printf("我抢到一张票数之后剩余票数：");
	scanf("%d", &ticket);
}
