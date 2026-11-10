// Day 95: Recursive sum from 1 to N

#include <stdio.h>
int sum(int n) {
    if (n <= 0) return 0;
    return n + sum(n - 1);
}
int main(void) {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Sum = %d
", sum(n));
    return 0;
}
