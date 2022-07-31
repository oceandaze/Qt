#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include<string.h>
int main()
{
    // 声明结构体，同时定义变量
    struct Car {
        struct _Engine {
            int height;
            int width;
        } engine;  // 发动机
        char color[10]; // 颜色
    } a_car;

    // 给发动机属性赋值
    a_car.engine.width = 40;
    a_car.engine.height = 60;

    // 设置车子的颜色
    strcpy(a_car.color,"蓝色");
    printf("车子的颜色%s\n", a_car.color);
    printf("发动机的宽度：%d\n", a_car.engine.width);
    printf("发动机的高度：%d\n", a_car.engine.height);



    return 0;
}
