#include<stdio.h>
int main()
{
    long long int num, fact = 1;

    printf("enter a number: ");
    scanf("%lld", &num);

    for(int i=1; i<=num; i++)
    {
        fact = fact*i;
    }
    printf("%lld", fact);
    return 0;
}