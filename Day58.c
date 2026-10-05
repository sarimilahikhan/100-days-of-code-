// Day 58: Power using a loop

#include <stdio.h>
int main(void) {
    int base, exponent;
    long long result = 1;
    printf("Enter base and non-negative exponent: ");
    scanf("%d %d", &base, &exponent);
    if (exponent < 0) printf("Use a non-negative exponent
");
    else {
        for (int i = 1; i <= exponent; i++) result *= base;
        printf("Result = %lld
", result);
    }
    return 0;
}
