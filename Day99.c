// Day 99: Delete an array element by position

#include <stdio.h>
int main(void) {
    int a[5], position;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);
    printf("Enter position to delete (1-5): ");
    scanf("%d", &position);
    if (position < 1 || position > 5) printf("Invalid position
");
    else {
        for (int i = position - 1; i < 4; i++) a[i] = a[i + 1];
        printf("Updated array: ");
        for (int i = 0; i < 4; i++) printf("%d ", a[i]);
        printf("
");
    }
    return 0;
}
