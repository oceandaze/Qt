#include<stdio.h>/*包含头文件*/
int main() /*主函数main*/
{
    
    int  width=2,length=4,num;/*定义变量,为变量赋初值,表示载货区规格*/
    float f=1.5f;/*表示箱子规格*/
    num= (int)(width/f) * (int)(length/f);  /*强制类型转换计算承载数*/      
    printf("载货区一层可以放%d个箱子\n",num);/*显示结果*/              
    return 0;    /*程序结束*/                               
}