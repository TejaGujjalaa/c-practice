#include<stdio.h>

int sum(int x)
{
    int s = 0;
    if(x <= 0)
        return 0;

    
    s = x + sum(x-1);
    return s;

}


int main(void)
{
    int a=0;
    a = sum(10);
    printf("%d",a);

    return 0;
}