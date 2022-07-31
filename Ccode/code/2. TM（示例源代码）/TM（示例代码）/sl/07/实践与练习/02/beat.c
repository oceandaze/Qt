/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   星座大揭秘
*/
#include<stdio.h>
int main()
{
	int month;

	while(1){
	printf("请输入你的出生月份：\n");
	scanf("%d",&month);
	switch (month)
	{
		case 1:
			printf("你的星座是摩羯座\n幸运数是8\n");
			break;
		case 2:
			printf("你的星座是水平座\n幸运数是4\n");
			break;
		case 3:
			printf("你的星座是双鱼座\n幸运数是7\n");
			break;
		case 4:
			printf("你的星座是白羊座\n幸运数是9\n");
			break;
		case 5:
			printf("你的星座是金牛座\n幸运数是6\n");
			break;
		case 6:
			printf("你的星座是双子座\n幸运数是5\n");
			break;
		case 7:
			printf("你的星座是巨蟹座\n幸运数是2\n");
			break;
		case 8:
			printf("你的星座是狮子座\n幸运数是1\n");
			break;
		case 9:
			printf("你的星座是处女座\n幸运数是5\n");
			break;
		case 10:
			printf("你的星座是天秤座\n幸运数是6\n");
			break;
		case 11:
			printf("你的星座是天蝎座\n幸运数是9\n");
			break;
		case 12:
			printf("你的星座是射手座\n幸运数是3\n");
			break;
		default:
			printf("输入不正确，你是外星来的吗\n");
     }
	}
	return 0;
}