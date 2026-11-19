#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    
    printf("enter celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (9.0 / 5) * celsius + 32;

    printf("Temperature in fahrenheit = %.2f\n", fahrenheit);

    return 0;
}