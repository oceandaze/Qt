#include<stdio.h>
int main()
{
	int fs;
	printf("请输入您的高考成绩：");
	scanf("%d", &fs);
	switch (fs)
	{
	case 671:
		printf("选择北京大学\n");
		break;
	case 661:
		printf("选择清华大学\n");
		break;
	case 668:
		printf("选择复旦大学\n");
		break;
	case 664:
		printf("选择上海交通大学\n");
		break;
	default:
		printf("选择其他大学\n");
		break;

	}
	return 0;
}