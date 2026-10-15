// Day 69: Array sum and average

#include <stdio.h>
int main(void) {
    int a[5], sum = 0;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) { scanf("%d", &a[i]); sum += a[i]; }
    printf("Sum = %d
Average = %.2f
", sum, sum / 5.0);
    return 0;
}
