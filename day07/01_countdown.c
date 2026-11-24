#include<stdio.h>

void count(int n)
{
    if(n<1)
    {
        return ;
    }
    else
    {
        printf("%d",n);
        count(n-1);
    }
}

int main(void)
{
    int n=10;
    count(n);

    return 0;
}