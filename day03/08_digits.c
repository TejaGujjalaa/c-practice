#include<stdio.h>
int  main()
{
    int num, sum=0;
    printf("enter a number: ");
    scanf("%d", &num);

    if(num < 0)
        num = -num;

    while(num>0)
    {
        int d = num % 10;
        sum = sum+d;
        num = num /10;
    }
    printf("sum of digits : %d", sum);
    return 0;

}