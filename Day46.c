// Day 46: Sum from 1 to N

#include <stdio.h>
int main(void) {
    int n, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) sum += i;
    printf("Sum = %d
", sum);
    return 0;
}
