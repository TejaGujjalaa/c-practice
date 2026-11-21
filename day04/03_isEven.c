#include<stdio.h>

int is_even(int n);

int main(void)
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    int result = is_even(n);
    if(result  == 1)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd");
    }
    return 0;

}

int is_even(int n)
{
    if(n %2 == 0)
    {
        return 1;
    }
    else
        return 0;
}