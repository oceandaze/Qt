#include <stdio.h>
int main()
{
    float height,weight;/*定义height为身高，weight为体重*/
	double BMI;     /*身体质量指数*/  
    printf("请输入身高、体重：");/*提示信息*/
    scanf("%f %f",&height,&weight);/*输入身高、体重*/
    BMI=weight/(height*height);/*计算BMI值*/
    printf("您的身体质量指数（BMI）:%f\n",BMI);/*输出指数*/
    return 0;/*程序结束*/
}