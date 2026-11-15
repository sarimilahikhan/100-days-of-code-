// Day 100: Check whether an array is sorted

#include <stdio.h>
int main(void) {
    int a[5], sorted = 1;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);
    for (int i = 0; i < 4; i++)
        if (a[i] > a[i + 1]) sorted = 0;
    if (sorted) printf("Array is in ascending order
");
    else printf("Array is not in ascending order
");
    return 0;
}
