/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   模拟手机分期付款
*/
#include<stdio.h>
int main()
{
	double sum, m;                    //sum为借钱数 ，m是手机的总价格
	int i = 0;                          //定义变量，用来控制循环
	printf("请输入你想买的手机价格：");//输出提示信息
	scanf("%lf", &m);              //输入手机钱数
	sum = m - 300;                     //减去首付的钱
	printf("手机的总价格是：%.1lf元.\n首付300之后还剩%.1lf元\n", m, sum);//输出提示
	printf("将所剩%.1lf元进行分6期付款：\n", sum);                  //输出提示
	for (i = 0; i<6; i++)                                      //循环6次，表示6个月还清
	{
		sum *= 1.006;                       //借款*利率
	}
	sum /= 6;                                          //计算每个月还的钱数
	printf("从我买手机开始，接下来的6个月每月需要还%.1lf元钱\n", sum);//输出最终结果
	return 0;                                       //程序结束
}
