// Day 96: Recursive Fibonacci term

#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(void) {
    int n;
    printf("Enter term position (0 to 20): ");
    scanf("%d", &n);
    if (n < 0 || n > 20) printf("Position out of range
");
    else printf("Fibonacci term = %d
", fibonacci(n));
    return 0;
}
