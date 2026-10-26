// Day 80: Sum of main diagonal of a matrix

#include <stdio.h>
int main(void) {
    int a[3][3], sum = 0;
    printf("Enter 9 values for a 3x3 matrix: ");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
            if (i == j) sum += a[i][j];
        }
    printf("Main diagonal sum = %d
", sum);
    return 0;
}
