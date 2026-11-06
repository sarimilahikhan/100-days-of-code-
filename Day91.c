// Day 91: Swap numbers using pointers

#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void) {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("After swapping: %d %d
", x, y);
    return 0;
}
