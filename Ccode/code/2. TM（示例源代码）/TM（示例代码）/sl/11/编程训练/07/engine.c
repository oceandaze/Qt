#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include<string.h>
int main()
{
    // �����ṹ�壬ͬʱ�������
    struct Car {
        struct _Engine {
            int height;
            int width;
        } engine;  // ������
        char color[10]; // ��ɫ
    } a_car;

    // �����������Ը�ֵ
    a_car.engine.width = 40;
    a_car.engine.height = 60;

    // ���ó��ӵ���ɫ
    strcpy(a_car.color,"��ɫ");
    printf("���ӵ���ɫ%s\n", a_car.color);
    printf("�������Ŀ�ȣ�%d\n", a_car.engine.width);
    printf("�������ĸ߶ȣ�%d\n", a_car.engine.height);



    return 0;
}
