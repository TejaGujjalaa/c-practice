#include<stdio.h>

int min(int a, int b);

int main(void)
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    int result = min(a,b);
    printf("smallest number: %d", result);
    return 0;
}

int min(int a, int b)
{
    if(a > b)
        return b;
    else
        return a;
}