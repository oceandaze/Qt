#include<stdio.h>
struct goods	/*商品结构体*/						 
{
	char cName[20];	/*品牌名*/					 
	int  iNumber;	/*销售量*/					 
	 						 
} goods[5]={{"面膜",1458792365},/*定义结构体变量并初始化*/
				{"洁面",325656550},
				{"洗发露",324655854},
				{"护发素",256897412},
				{"卸妆膏",155655655}};	 

int main()/*主函数main*/
{
	int i;		/*循环控制变量*/				 
	for(i=0;i<5;i++)/*使用for进行循环*/			 
	{
		printf("NO%d 产品:\n",i+1);	 /*输出数组中的元素数据*/
		printf("品牌名是: %s, 销量: %d\n",goods[i].cName,goods[i].iNumber);/*使用变量i做下标，输出数组中的元素数据*/
		printf("\n");		/*空格行*/
	}
	return 0;
}