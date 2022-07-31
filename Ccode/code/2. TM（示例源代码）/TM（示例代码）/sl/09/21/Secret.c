#include<stdio.h>
#include<string.h>

int main()
{
	char password[20] = {"574824"};/*保存密码字符串*/
	char pwstr[20];/*保存输入密码字符串*/
	int i=1;

	while(i <= 3)/*循环3次输入密码机会*/
    {									 
		printf("输入密码字符串:\n");
		gets(pwstr); 										/*输入密码字符串*/
			if(strcmp(password,pwstr))						/*如果密码字符串不相等*/
			{
				printf("第%d次，密码字符串输入错误！\n",i);			/*提示密码字符串输入错误*/
			}
			else											/*密码字符串都正确*/
			{
				printf("密码正确，请选择服务！\n");			/*输出字符串*/
				break;/*退出*/
			}
		
		i++;
	}
	if(i == 4)
	{
		printf("输入字符串错误3次！请到人工处办理解锁\n");	/*输入字符串错误3次*/
	}

	return 0;												/*程序结束*/
}

