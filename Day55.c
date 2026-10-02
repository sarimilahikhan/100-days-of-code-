// Day 55: GCD of two numbers

#include <stdio.h>
int main(void) {
    int a, b, temp;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    while (b != 0) { temp = b; b = a % b; a = temp; }
    printf("GCD = %d
", a);
    return 0;
}
