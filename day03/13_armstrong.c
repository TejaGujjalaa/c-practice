#include<stdio.h>
int main()
{
    int num, temp ,r,arm=0;
    printf("enter the number: ");
    scanf("%d", &num);
    
    temp = num;
    while(num > 0)
    {
        r = num %  10;
        arm = arm + (r * r* r);
        num = num / 10;
    }

    if(arm == temp)
    {
        printf("Armstring");
    }
    else
    {
        printf("Not Armstring");
    }
    return 0;
}