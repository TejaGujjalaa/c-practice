#include <stdio.h>

int main()
{
    int x = 10;

    {
        int x = 20;

        {
            int x = 30;

            {
                int x = 40;
                printf("Inside 3rd block: %d\n", x);
            }

            printf("Inside 2nd block: %d\n", x);
        }

        printf("Inside 1st block: %d\n", x);
    }

    printf("Inside main: %d\n", x);

    return 0;
}