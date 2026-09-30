// Day 53: Print primes up to N

#include <stdio.h>
int main(void) {
    int n;
    printf("Enter limit: ");
    scanf("%d", &n);
    for (int num = 2; num <= n; num++) {
        int prime = 1;
        for (int i = 2; i <= num / i; i++)
            if (num % i == 0) { prime = 0; break; }
        if (prime) printf("%d ", num);
    }
    printf("
");
    return 0;
}
