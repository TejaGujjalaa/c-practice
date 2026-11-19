#include<stdio.h>
int main()
{
    int i = 5;

    printf("actual value is: %d\n", i);

    /* i++ post*/

    printf("\n i++ = %d\n", i++);
    printf("after i++ = %d\n", i);

    /* ++i pre */
    printf("\n ++i = %d\n", ++i);
    printf("after ++i = %d\n", i);

    return 0;
}