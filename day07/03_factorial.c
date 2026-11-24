#include<stdio.h>

unsigned long long fact(int n)
{
    if(n<=0) return 1;

    return n * fact(n-1);
    
}

int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);

    printf("Factorial of number = %llu\n ", fact(num) );

    

    return 0;
}