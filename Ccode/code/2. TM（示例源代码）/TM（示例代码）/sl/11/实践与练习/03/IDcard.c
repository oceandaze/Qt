/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   身份证信息暴露啦
*/
#include<stdio.h>

struct card										//身份证结构
{
	char cName[60];								//姓名
	int birth;									//出生日期
	char cSex[5];									//性别
	char address[100];									//家庭住址
}id[5] = { { "王囧",19991212,"男","吉林省长春市" },//定义数组并设置初始值
{ "李果",19940505,"女","河北省北京市" },
{ "张多",20001111,"男","山东省济南市" },
{ "赵紫轩",19900306,"女","辽宁省大连市" },
{ "钱小欠",19920506,"男","江苏省苏州市" } };

int main()
{
	struct card* pStruct;//定义结构体指针变量
	int index;//定义用来控制变量
	pStruct = id;//指针指向首地址
	for (index = 0; index<5; index++, pStruct++)//使用变量index做下标，输出数组中的元素数据
	{
		printf("\n第%d 个人:\n", index + 1);		//输出提示信息												
		printf("姓名: %s, 出生日期: %d\n", pStruct->cName, pStruct->birth);
		printf("性别: %s, 地址: %s\n", pStruct->cSex, pStruct->address);
		printf("\n");							//空格行
	}
	return 0;
}
