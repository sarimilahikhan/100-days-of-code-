// Day 92: Sum array elements using a pointer

#include <stdio.h>
int main(void) {
    int a[5], sum = 0;
    int *ptr = a;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) scanf("%d", ptr + i);
    for (int i = 0; i < 5; i++) sum += *(ptr + i);
    printf("Sum = %d
", sum);
    return 0;
}
