// Day 61: Floyd's triangle

#include <stdio.h>
int main(void) {
    int rows, value = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", value++);
        printf("
");
    }
    return 0;
}
