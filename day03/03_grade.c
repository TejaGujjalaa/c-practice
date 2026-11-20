#include<stdio.h>
int main()
{
    int marks;
    printf("enter your marks: ");
    scanf("%d", &marks);

    if(marks >= 90)
        printf("A-Grade");
    else if(marks >= 80)
        printf("B-Grade");
    else if(marks >= 70)
        printf("C-Grade");
    else if(marks >= 60)
        printf("D-Grade");
    else
        printf("you are failed!");

    return 0;
}