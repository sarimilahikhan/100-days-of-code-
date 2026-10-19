// Day 73: Count even and odd array elements

#include <stdio.h>
int main(void) {
    int a[6], even = 0, odd = 0;
    printf("Enter 6 numbers: ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even = %d
Odd = %d
", even, odd);
    return 0;
}
