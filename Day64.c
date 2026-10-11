// Day 64: Function to add two numbers

#include <stdio.h>
int add(int a, int b) { return a + b; }
int main(void) {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Sum = %d
", add(x, y));
    return 0;
}
