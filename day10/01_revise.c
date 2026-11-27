#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);


    printf("Sum = %d\n", a+b);
    printf("Product = %d\n", a*b);

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu bytes\n", sizeof(char));

    return 0;

}