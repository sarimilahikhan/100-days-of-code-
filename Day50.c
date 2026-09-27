// Day 50: Palindrome number

#include <stdio.h>
int main(void) {
    int n, original, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n > 0) { reverse = reverse * 10 + n % 10; n /= 10; }
    if (original >= 0 && original == reverse) printf("Palindrome
");
    else printf("Not a palindrome
");
    return 0;
}
