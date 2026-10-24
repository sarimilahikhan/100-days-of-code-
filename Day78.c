// Day 78: Add two matrices

#include <stdio.h>
int main(void) {
    int a[2][2], b[2][2];
    printf("Enter 4 values for matrix A: ");
    for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) scanf("%d", &a[i][j]);
    printf("Enter 4 values for matrix B: ");
    for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) scanf("%d", &b[i][j]);
    printf("Sum:
");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) printf("%d ", a[i][j] + b[i][j]);
        printf("
");
    }
    return 0;
}
