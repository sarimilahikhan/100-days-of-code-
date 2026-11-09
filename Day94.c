// Day 94: Recursive factorial

#include <stdio.h>
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
int main(void) {
    int n;
    printf("Enter a number from 0 to 20: ");
    scanf("%d", &n);
    if (n < 0 || n > 20) printf("Number out of range
");
    else printf("Factorial = %lld
", factorial(n));
    return 0;
}
