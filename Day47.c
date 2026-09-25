// Day 47: Factorial using a loop

#include <stdio.h>
int main(void) {
    int n;
    unsigned long long fact = 1;
    printf("Enter a non-negative number: ");
    scanf("%d", &n);
    if (n < 0) printf("Factorial is not defined for negative numbers
");
    else {
        for (int i = 1; i <= n; i++) fact *= i;
        printf("Factorial = %llu
", fact);
    }
    return 0;
}
