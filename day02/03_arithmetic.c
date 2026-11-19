#include<stdio.h>
int main()

{
    int a,b;

    printf("enter two numbers: ");
    scanf("%d %d", &a,&b);

    printf("sum of two numbers = %d\n", a + b);
    printf("subtraction of two numbers = %d\n", a - b);
    printf("product of two numbers = %d\n", a * b );
    printf("quotient of two numbers = %d\n", a / b);
    printf("Remainder of two numbers = %d\n", a  % b);
    
    return 0;
}