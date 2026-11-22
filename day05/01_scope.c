#include <stdio.h>

int global = 100;  /*Global variable*/

int main()
{
    int local = 50;  /*Local variable*/

    printf("Global variable: %d\n", global);
    printf("Local variable: %d\n", local);

    {
        int block = 25;  /*Block variable*/

        printf("Block variable: %d\n", block);
    }

    return 0;
}