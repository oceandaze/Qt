#include<stdio.h>
int main()
{
	int loc,ser;                                         /*定义变量loc为工位号，ser为密码*/
	printf("请输入工位号、密码：");
    scanf("%d,%d",&loc,&ser);                            /*输入工位号和密码*/
    if(loc==13&&ser==111)                                /*判断输入是否相同*/
        printf("谢谢，已签到\n");        
	if(loc!=13&&ser!=111)                                /*判断输入是否不等于*/
        printf("对不起，工位号或密码有错误\n");           
    return 0;
}
