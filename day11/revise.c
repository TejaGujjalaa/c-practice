#include <stdio.h>

int max(int a, int b) { return a > b ? a : b; }

void callByValue(int x) { x = x + 10; }  // changes only the copy

int power(int base, int exp) {           // recursion
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main(void) {
    int n = 5;
    callByValue(n);
    printf("n after callByValue = %d\n", n);  // still 5
    printf("max(7, 3) = %d\n", max(7, 3));
    printf("2^5 = %d\n", power(2, 5));
    printf("sizeof(int) = %zu bytes\n", sizeof(int));
    return 0;
}
