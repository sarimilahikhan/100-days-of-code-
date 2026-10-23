// Day 77: Merge two small arrays

#include <stdio.h>
int main(void) {
    int a[3], b[3], c[6];
    printf("Enter 3 numbers for first array: ");
    for (int i = 0; i < 3; i++) scanf("%d", &a[i]);
    printf("Enter 3 numbers for second array: ");
    for (int i = 0; i < 3; i++) scanf("%d", &b[i]);
    for (int i = 0; i < 3; i++) { c[i] = a[i]; c[i + 3] = b[i]; }
    printf("Merged array: ");
    for (int i = 0; i < 6; i++) printf("%d ", c[i]);
    printf("
");
    return 0;
}
