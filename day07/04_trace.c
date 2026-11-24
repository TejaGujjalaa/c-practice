
#include <stdio.h>

int factorial(int n)
{
    printf("Entering factorial(%d)\n", n);

    if (n == 1)
    {
        printf("Returning 1 from factorial(1)\n");
        return 1;
    }

    int result = n * factorial(n - 1);

    printf("Returning %d from factorial(%d)\n", result, n);

    return result;
}

int main()
{
    int num = 5;

    int result = factorial(num);

    printf("Final factorial = %d\n", result);

    return 0;
}
