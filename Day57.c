// Day 57: Armstrong number (three digits)

#include <stdio.h>
int main(void) {
    int n, temp, digit, sum = 0;
    printf("Enter a three-digit number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if (n >= 100 && n <= 999 && sum == n) printf("Armstrong number
");
    else printf("Not an Armstrong number
");
    return 0;
}
