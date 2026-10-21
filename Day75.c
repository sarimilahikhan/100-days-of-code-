// Day 75: Sort an array in ascending order

#include <stdio.h>
int main(void) {
    int a[5], temp;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4 - i; j++)
            if (a[j] > a[j + 1]) {
                temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp;
            }
    printf("Sorted: ");
    for (int i = 0; i < 5; i++) printf("%d ", a[i]);
    printf("
");
    return 0;
}
