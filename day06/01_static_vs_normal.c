#include<stdio.h>

void normal_count(void)
{
    int count=0;
    count++;
    printf("Normal count = %d\n", count);
}

void static_count(void)
{
    static int count=0;
    count++;
    printf("Static count = %d\n", count);
}

int main()
{
    normal_count();
    normal_count();
    normal_count();

    printf("\n");

    static_count();
    static_count();
    static_count();

    return 0;
}