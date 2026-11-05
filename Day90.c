// Day 90: Change a value using a pointer

#include <stdio.h>
int main(void) {
    int number = 10;
    int *ptr = &number;
    *ptr = 50;
    printf("Updated number = %d
", number);
    return 0;
}
