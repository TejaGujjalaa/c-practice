#include<stdio.h>

void countcall()
{
    static int count =0;
    count ++;

    printf("function called %d time.\n", count);

}

int main()
{

    countcall();
    countcall();
    countcall();
    countcall();
    countcall();

    return 0;
}