#include "stdio.h"
struct Car {
    float gasoline;
};

void Add(struct Car* pCar) {
    pCar->gasoline += 2;
}

int main()
{
    struct Car car = { 12.0f };
    printf("����ǰ:%.2f\n", car.gasoline);
    Add(&car);
    printf("���ͺ�:%.2f\n", car.gasoline);
    Add(&car);
    printf("���ͺ�:%.2f\n", car.gasoline);


    Add(&car);
    printf("���ͺ�:%.2f\n", car.gasoline);


    return 0;
}
