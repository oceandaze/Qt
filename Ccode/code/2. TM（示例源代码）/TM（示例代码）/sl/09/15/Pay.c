#include<stdio.h>

int iGlobalPrice=100;							/*设定商店的初始价格*/

void Store1Price();							/*声明函数，代表第1个连锁店*/
void Store2Price();							/*代表第2个连锁店*/
void Store3Price();							/*代表第3个连锁店*/
void ChangePrice();							/*更改连锁店的统一价格*/

int main()
{
		/*先显示价格改变之前所有连锁店的价格*/
	printf("原价格 : %d\n",iGlobalPrice);
	Store1Price();							/*显示1号连锁店的价格*/
	Store2Price();							/*显示2号连锁店的价格*/
	Store3Price();							/*显示3号连锁店的价格*/
		/*调用函数，改变连锁店的价格*/
	ChangePrice();
		/*显示提示，显示修改后的价格*/
	printf("修改的价格是: %d\n",iGlobalPrice);
	Store1Price();							/*显示1号连锁店的当前价格*/
	Store2Price();							/*显示2号连锁店的当前价格*/
	Store3Price();							/*显示3号连锁店的当前价格*/
	return 0;
}
/*定义1号连锁店的价格函数*/
void Store1Price()
{
	printf("商品1的价格 : %d\n",iGlobalPrice);
}
/*定义2号连锁店的价格函数*/
void Store2Price()
{
	printf("商品2的价格 : %d\n",iGlobalPrice);
}
/*定义3号连锁店的价格函数*/
void Store3Price()
{
	printf("商品3的价格 : %d\n",iGlobalPrice);
}
/*定义更改连锁店价格函数*/
void ChangePrice()
{
	printf("您想要改价格吗？如果是，改的价格是: ");
	scanf("%d",&iGlobalPrice);
}
