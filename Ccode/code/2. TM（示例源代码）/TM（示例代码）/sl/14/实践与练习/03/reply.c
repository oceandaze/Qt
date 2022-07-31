/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   模拟淘宝客服自动回复
*/
#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp1, *fp2; 						/*定义一个指向FILE类型结构体的指针变量*/
	char ch, filename1[30], filename2[30];	/*定义字符数组变量*/
	printf("请输入与买家交谈文件名：\n");
	scanf("%s", filename1);				
	printf("请输入客服自动回复内容文件名：\n");
	scanf("%s", filename2); 				
	if ((fp1 = fopen(filename1, "ab+")) == NULL)
	{
		printf("不能打开，请按任意键结束\n");
		getchar();
		exit(0);
	}
	if ((fp2 = fopen(filename2, "rb")) == NULL) 
	{
		printf("不能打开，请按任意键结束\n");
		getchar();
		exit(0);
	}
	fseek(fp1, 0L, 2);
	while ((ch = fgetc(fp2)) != EOF)
	{
		fputc(ch, fp1);
	}
	fclose(fp1);							
	fclose(fp2);
}
