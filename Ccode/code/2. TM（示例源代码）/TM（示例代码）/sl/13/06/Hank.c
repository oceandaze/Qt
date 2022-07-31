#include<stdio.h>
#define STR "100号" /*定义宏常量*/
int main()
{
    #ifdef STR          /*取到号码*/
        printf(STR);/*输出信息*/
        printf("能办理业务\n");/*输出信息*/
    #endif
    printf("\n");
    #ifndef ABC         /*没取号码，表示没被定义*/
        printf("没取到号不能办理业务\n");/*输出信息*/
    #endif
        return 0;
}
