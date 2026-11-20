#include<stdio.h>
int main()
{
    int num1, num2;
    char opr;

    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("enter  operator to perform: ");
    scanf(" %c", &opr);

    switch(opr)
    {
    case '+' :
    printf("Sum of two numbers: %d", num1 + num2);
        break;

    case '-' :
    printf("Subtraction of Two numbers: %d", num1 - num2);
        break;
    
    case '*' :
    printf("Product of two numbers: %d", num1*num2);
        break;

    case '/' :
        if(num2 != 0)
            printf("Division of two numbers: %d", num1/num2);
    
        else
            printf("Can not divisible by zero");
        break;

    default :
    printf("Enter valid operator");
    }
    return 0;


}