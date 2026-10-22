// Day 76: Copy one array into another

#include <stdio.h>
int main(void) {
    int a[5], b[5];
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);
    for (int i = 0; i < 5; i++) b[i] = a[i];
    printf("Copied array: ");
    for (int i = 0; i < 5; i++) printf("%d ", b[i]);
    printf("
");
    return 0;
}
