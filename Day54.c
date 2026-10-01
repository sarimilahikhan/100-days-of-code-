// Day 54: Fibonacci series

#include <stdio.h>
int main(void) {
    int n;
    long long a = 0, b = 1;
    printf("How many terms? ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%lld ", a);
        long long next = a + b;
        a = b; b = next;
    }
    printf("
");
    return 0;
}
