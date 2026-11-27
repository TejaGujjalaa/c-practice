
#include <stdio.h>

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Inside function:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}

int main()
{
    int a = 10, b = 20;

    printf("Before function:\n");
    printf("a = %d, b = %d\n", a, b);

    swap(a, b);

    printf("After function:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
