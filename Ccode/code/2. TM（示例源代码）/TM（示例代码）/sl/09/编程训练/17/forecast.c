#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	// 天气预报列表
	char weathers1[60] = "2021年1月23日 ", weathers2[60] = "晴, 20℃~7℃, 微风转西风3~4级";
	char weathers3[30] = "08:00  晴", weathers4[30] = "13℃  微风";
	char weathers5[30] = "12:00  晴", weathers6[30] = "19℃  微风";
	char weathers7[30] = "16:00  晴", weathers8[30] = "18℃  微风";
	char weathers9[30] = "20:00  晴", weathers10[30] = "15℃  微风";
	char weathers11[30] = "00:00  晴", weathers12[30] = "12℃  微风";
	strcat(weathers1, weathers2);
	strcat(weathers3, weathers4);
	strcat(weathers5, weathers6);
	strcat(weathers7, weathers8);
	strcat(weathers9, weathers10);
	strcat(weathers11, weathers12);
	puts(weathers1);// 循环天气预报列表
	puts(weathers3);
	puts(weathers5);
	puts(weathers7);
	puts(weathers9);
	puts(weathers11);
	return 0;
}