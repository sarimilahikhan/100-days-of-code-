// Day 67: Function to find maximum

#include <stdio.h>
int maximum(int a, int b) { return (a > b) ? a : b; }
int main(void) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Maximum = %d
", maximum(a, b));
    return 0;
}
