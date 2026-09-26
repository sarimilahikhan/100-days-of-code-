// Day 48: Count digits

#include <stdio.h>
int main(void) {
    int n, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n == 0) count = 1;
    while (n != 0) { count++; n /= 10; }
    printf("Number of digits = %d
", count);
    return 0;
}
