#include<stdio.h>

int main()
{
    auto int a=15;
    register int b=25;


    printf("Auto int value is %d \n", a);
    printf("Register int value is %d \n", b);

    printf("Auto int value is %p \n", (void *)&a);
    //printf("Register int value is %d", (void *)&b);

    return 0;
}

