// Day 63: Swap two numbers without a third variable

#include <stdio.h>
int main(void) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a = a + b; b = a - b; a = a - b;
    printf("After swapping: a = %d, b = %d
", a, b);
    return 0;
}
