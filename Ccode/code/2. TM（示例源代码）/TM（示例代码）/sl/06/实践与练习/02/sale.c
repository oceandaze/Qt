/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   模拟自动售货机
*/
#include<stdio.h>
int main()
{
	int button;                               //定义变量存储选择
	printf("************************\n");   //输出样式
	printf("*    可选择的按键：    *\n");
	printf("*     1.巧克力         *\n");
	printf("*     2.小面包         *\n");
	printf("*     3.可口可乐       *\n");
	printf("************************\n");
	printf("从1~3中选择按键：\n");          //提示信息
	scanf("%d", &button);                  //输入选择的数据
	switch (button)                         //使用switch语句判断
	{
	case 1:                                  //如果输入的是数字1
		printf("您选择了巧克力\n");          //输出选择“巧克力”
		break;                               //跳出程序
	case 2:                                  //如果输入的是数字2
		printf("您选择了小面包\n");         //输出选择“小面包”
		break;                               //跳出程序
	case 3:                                 //如果输入的是数字3
		printf("您选择了可口可乐\n");         //输出选择“可口可乐”
		break;                                 //跳出程序
	default:                                   //如果输入的不是1、2、3
		printf("输出错误!!!!\n");           //提示“输出错误”
		break;                                //跳出程序
	}
	return 0;                                 //程序结束
}
