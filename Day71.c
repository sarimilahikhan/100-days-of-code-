// Day 71: Smallest element in an array

#include <stdio.h>
int main(void) {
    int a[5], smallest;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);
    smallest = a[0];
    for (int i = 1; i < 5; i++)
        if (a[i] < smallest) smallest = a[i];
    printf("Smallest = %d
", smallest);
    return 0;
}
