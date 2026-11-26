
#include <stdio.h>

extern int count;

int main()
{
    printf("Initial count = %d\n", count);

    count = 200;

    printf("Updated count = %d\n", count);

    return 0;
}
