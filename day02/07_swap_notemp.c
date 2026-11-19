#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers: \n");
    scanf("%d %d", &a,&b);
    printf("original values are: \n");
    printf("a =%d, b=%d\n", a, b);


    printf("Using arithmetic method: \n");
    a = a+b;
    b = a-b;
    a = a-b;

    printf("after arithmetic swaping: \n");
    printf("a= %d, b= %d\n", a, b);


    printf("Using XOR method: \n");
    a= a^b;
    b=a^b;
    a=a^b;

    printf("after XOR method: \n");
    printf("a= %d,b= %d\n", a,b);

    return 0;

}