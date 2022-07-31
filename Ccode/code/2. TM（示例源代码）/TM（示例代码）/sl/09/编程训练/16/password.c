/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   对号入座
*/
#include<stdio.h>
#include<ctype.h>
int main()
{
	char num;                                                              //定义变量
	printf("请输入您的位置号：");                                           //提示                                        
    scanf("%c", &num); 
	  if (isalnum(num))                                                    //判断是否为数字或字母
	   {
		printf("→*→*→*→*→*→*→*→*→*→*→*\n");
		printf("  您的位置号是%c\n", num);//输出信息
		printf("  您输入的格式正确，请坐....\n");
		printf("→*→*→*→*→*→*→*→*→*→*→*\n");

	   }
	   else                                                                    //判断不是数字或字母
	   {
		printf("---------------------------------------\n");
		printf("|   对不起，您输入的座位号格式不正确   |\n");                                      //输出提示
        printf("|         不能找到您的位置             |\n");
		printf("---------------------------------------\n");
	    }
	return 0;
  }
