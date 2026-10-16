// Day 70: Largest element in an array

#include <stdio.h>
int main(void) {
    int a[5], largest;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);
    largest = a[0];
    for (int i = 1; i < 5; i++)
        if (a[i] > largest) largest = a[i];
    printf("Largest = %d
", largest);
    return 0;
}
