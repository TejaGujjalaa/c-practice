#include<stdio.h>

int max(int a, int b, int c);

int max(int a, int b, int c)
{
    int largest = a;
    if (b > largest)
        largest = b;

    if (c > largest)
        largest = c;

    return largest;
   
}

int main()
{
    int a,b,c;
    printf("enter three numbers: ");

    if(scanf("%d %d %d", &a, &b, &c) != 3)
    {
        printf("Invalid input. Please enter integers only.\n");

        return 1;
    }

    int result = max(a, b, c);

    printf("Largest = %d\n", result);

    return 0;

}