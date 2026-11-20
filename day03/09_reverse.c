#include<stdio.h>
int main()
{
    int num, rev=0;
    
    printf("enter a number: ");
    scanf("%d", &num);

    if(num <0){
        num = -num;
    }

    while(num>0){

        int d = num % 10;
        rev = rev * 10 + d;
        num = num / 10;
    }
    printf("reverse of number : %d", rev);
    return 0;
}