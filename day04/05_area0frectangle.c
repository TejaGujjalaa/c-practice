#include<stdio.h>

float rect_area(float length, float breadth);

int main(void)
{
    float len;
    printf("enter length: ");
    scanf("%f", &len);
    float bred;
    printf("enter breadth : ");
    scanf("%f", &bred);

    float area = rect_area(len, bred);
    printf("area of rectangle is: %.2f\n", area);
    return 0;
}

float rect_area(float length, float breadth)
{
    return length *  breadth;
}