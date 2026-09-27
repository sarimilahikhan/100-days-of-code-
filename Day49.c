// Day 49: Reverse a number

#include <stdio.h>
int main(void) {
    int n, reverse = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    printf("Reversed number = %d
", reverse);
    return 0;
}
