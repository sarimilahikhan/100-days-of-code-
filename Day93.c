// Day 93: Function that returns the cube

#include <stdio.h>
int cube(int n) { return n * n * n; }
int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Cube = %d
", cube(n));
    return 0;
}
