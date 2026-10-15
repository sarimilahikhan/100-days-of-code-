// Day 68: Function to calculate factorial

#include <stdio.h>
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) result *= i;
    return result;
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
