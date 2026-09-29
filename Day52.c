// Day 52: Prime number checker

#include <stdio.h>
int main(void) {
    int n, prime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 2) prime = 0;
    for (int i = 2; i <= n / i; i++)
        if (n % i == 0) { prime = 0; break; }
    if (prime) printf("Prime
");
    else printf("Not prime
");
    return 0;
}
