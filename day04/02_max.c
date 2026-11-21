#include<stdio.h>

int largest(int num1, int num2);

int main()
{
    int num1, num2;
    printf("enter two numbers: ");
    scanf("%d %d", &num1 , &num2);

    int result;
    result = largest(num1, num2);
    printf("Largest: %d\n", result);
    return 0;

}

int largest(int num1, int num2)
{
    if(num1 > num2)
        return num1;
    else
        return num2;

}