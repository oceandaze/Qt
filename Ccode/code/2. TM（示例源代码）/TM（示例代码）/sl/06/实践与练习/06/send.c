#include<stdio.h>
int main()
{
	int food, fee;                               //定义变量存储餐费、总共费用
	printf("您的订单餐费是：\n");               //提示信息
	scanf("%d", &food);                       //输入餐费
	fee = food >= 15 ? food : (food + 5);    //利用三目运算符计算总共费用
	printf("您的订单共计%d元，请支付\n", fee);  //输出总共费用
	return 0;                                    //程序结束
}
