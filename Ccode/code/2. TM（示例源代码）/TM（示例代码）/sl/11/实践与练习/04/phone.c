#include<stdio.h>

struct telephone											//声明手机基本信息结构体
{
	char brandName[20];									//品牌名
	int price;										//报价
	float screen;//主屏尺寸
	char processor[20];//处理器
	int battery;										//电池容量
}telephone1 = { "vivo NEX 双面屏",4998,6.39f,"高通 骁龙845",3500 };							//定义变量并设置初始值
int main()
{	
	printf("产品名称:%s\n", telephone1.brandName);//将结构体中第一个数据输出，即产品名称
	printf("官方报价:%d元\n", telephone1.price);//将结构体中第二个数据输出，即官方报价
	printf("主屏尺寸:%.2f寸\n", telephone1.screen);//将结构体中第三个数据输出，即主屏尺寸
	printf("CPU型号:%s\n", telephone1.processor);//将结构体中第四个数据输出，即CPU型号
	printf("电池容量:%dmAh\n", telephone1.battery);//将结构体中第四个数据输出，即电池容量
	return 0;
}
