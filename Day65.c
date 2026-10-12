// Day 65: Function to find square

#include <stdio.h>
int square(int n) { return n * n; }
int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Square = %d
", square(n));
    return 0;
}
