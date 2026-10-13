// Day 66: Function to check even or odd

#include <stdio.h>
int isEven(int n) { return n % 2 == 0; }
int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isEven(n)) printf("Even
");
    else printf("Odd
");
    return 0;
}
