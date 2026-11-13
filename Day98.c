// Day 98: Insert a value at the end of an array

#include <stdio.h>
int main(void) {
    int a[6], n = 5, value;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter value to insert at end: ");
    scanf("%d", &value);
    a[n] = value;
    n++;
    printf("Updated array: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("
");
    return 0;
}
