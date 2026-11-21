#include<stdio.h>
#define PI 3.14159f

float area(float radius);

int main(void)
{
    float radi;
    printf("enter radius of circle: ");
    scanf("%f", &radi);

    float result = area(radi);
    printf("Area of circle : %.2f", result);
    return 0;
}

float area(float radius)
{
    return PI * radius * radius;
}