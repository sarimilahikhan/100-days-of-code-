// Day 79: Transpose a 2 by 2 matrix

#include <stdio.h>
int main(void) {
    int a[2][2];
    printf("Enter 4 matrix values: ");
    for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) scanf("%d", &a[i][j]);
    printf("Transpose:
");
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 2; i++) printf("%d ", a[i][j]);
        printf("
");
    }
    return 0;
}
