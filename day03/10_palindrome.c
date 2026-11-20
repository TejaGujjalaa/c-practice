#include<stdio.h>
int main()
{
    int num, rev=0;
    printf("enter a number: ");
    scanf("%d", &num);

    int original = num;

    while(num>0)
    {
        int d = num % 10;
        rev = rev * 10 + d;
        num = num / 10;
    }

    if(original ==  rev)
    {
        printf("the number is palindrome %d", rev);
    }
    else 
    {
        printf("the number is not a palindrome %d", rev);

    }
    return 0;
}