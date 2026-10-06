// Day 59: Star right triangle

#include <stdio.h>
int main(void) {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("
");
    }
    return 0;
}
