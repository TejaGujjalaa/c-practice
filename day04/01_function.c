#include<stdio.h>
int add(int a, int b);
int prod(int a, int b);

int main()
{
    int a=10,b=5;

    int sum = add(a,b);
    int product = prod(a,b); 

    printf("%d\n", sum);
    printf("%d\n", product);

    return 0;

}

int add(int a, int b)
{
    return a+b;

}

int prod(int a, int b)
{
    return a*b;
}