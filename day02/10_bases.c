#include<stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d", &a);

    printf("Decimal : %d\n", a);
    printf("Hexa : %x\n", a);
    printf("Octal : %o\n", a);

    return 0;

}