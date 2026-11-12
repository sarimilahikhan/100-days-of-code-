// Day 97: Count occurrences in an array

#include <stdio.h>
int main(void) {
    int a[8], key, count = 0;
    printf("Enter 8 numbers: ");
    for (int i = 0; i < 8; i++) scanf("%d", &a[i]);
    printf("Enter value to count: ");
    scanf("%d", &key);
    for (int i = 0; i < 8; i++) if (a[i] == key) count++;
    printf("Occurrences = %d
", count);
    return 0;
}
