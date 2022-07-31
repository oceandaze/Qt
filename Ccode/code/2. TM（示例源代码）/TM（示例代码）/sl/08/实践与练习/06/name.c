/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   谁被@啦
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30] = "明日科技", str2[30] = "扎克伯格", str3[30] = "比尔盖茨", str4[10] = "  你被@了";
	strcat(str1,str4);
	strcat(str2, str4);
	strcat(str3, str4);
	printf("\n被艾特的列表：\n");
	printf("%s\n",str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	return 0;
}
