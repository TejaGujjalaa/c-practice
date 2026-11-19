#include<stdio.h>
int main()
{
    signed char a = 127;

    printf("before adding 1 : %d\n", a);

    a = a+1;
    
    printf("after adding 1 : %d\n", a);

    return 0;
}