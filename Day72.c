// Day 72: Search for an element in an array

#include <stdio.h>
int main(void) {
    int a[5], key, found = 0;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);
    printf("Enter number to search: ");
    scanf("%d", &key);
    for (int i = 0; i < 5; i++)
        if (a[i] == key) { printf("Found at position %d
", i + 1); found = 1; break; }
    if (!found) printf("Not found
");
    return 0;
}
