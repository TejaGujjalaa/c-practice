#include<stdio.h>
int main()
{
    int a, b, temp;

    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swap\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    

    temp = a;
    a = b;
    b = temp;


    printf("\nAfter swap\n");
    printf("a = %d\n",  a);
    printf("b = %d\n",  b);

    return 0;


}