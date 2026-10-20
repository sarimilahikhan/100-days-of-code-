// Day 74: Reverse an array

#include <stdio.h>
int main(void) {
    int a[5], temp;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);
    for (int i = 0; i < 5 / 2; i++) {
        temp = a[i]; a[i] = a[4 - i]; a[4 - i] = temp;
    }
    printf("Reversed array: ");
    for (int i = 0; i < 5; i++) printf("%d ", a[i]);
    printf("
");
    return 0;
}
