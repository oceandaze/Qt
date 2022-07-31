/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   模拟控制交通灯场景
*/
#include "stdio.h"
#define iInput 3
int main()
{
#if iInput==1 
	printf("-----------\n");
	printf("|  红灯停  |\n");
	printf("-----------\n");
#else
#if iInput==2
	printf("* * * * * * * *\n");
	printf("*   绿灯行    *\n", iInput);
	printf("* * * * * * * *\n");
#else	
	printf("→ → → → → →\n");
	printf("    黄灯等待\n", iInput);
	printf("→ → → → → →\n");
#endif
#endif

	return 0;
}
