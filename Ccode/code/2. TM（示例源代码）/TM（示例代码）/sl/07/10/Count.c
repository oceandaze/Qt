#include<stdio.h>

int main()
{
	int iStep;									/*定义变量，表示外部循环步骤*/
	int iSelect;									/*保存用户的输入选项*/
	for(iStep=1;iStep<10;iStep++)					/*外部步骤循环*/
	{
		printf("步骤号:%d\n",iStep);			/*将其循环的步骤号显示*/
		do									/*使用do…while语句进行循环*/
		{
			printf("请输入一个选择序号：\n");		/*输出提示信息*/
			printf("(0 是退出,99 是下一步)\n");
			scanf("%d",&iSelect);				/*用户输入选择*/
			if(iSelect==0)						/*判断输入的是否为0*/
			{
				goto exit;						/*执行goto跳转语句*/
			}
		}
		while(iSelect!=99);						/*判断用户输入*/
	}
exit:											/*跳转语句执行位置*/
	printf("退出程序!\n");						/*显示程序结束信息*/
	return 0;
}
