/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   输出中国联通流量提醒
*/
#include<stdio.h>
int main()
{
	float f1 = 3.592f;
	float f2 = 3.408f;
	char address[30] = "http://u.10010.cn/tAE3v";
	printf("\n中国联通流量提醒：\n");
	printf("截至10月21日24时，\n");
	printf("您当月共享国内通用流量已用%.3fGB，剩余%.3fGB；\n" ,f1,f2);
	printf("其他流量使用情况请点击进入%s\n",address);

	return 0;
}
