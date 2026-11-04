// Day 89: Pointer to a variable

#include <stdio.h>
int main(void) {
    int number = 25;
    int *ptr = &number;
    printf("Value = %d
", number);
    printf("Address = %p
", (void *)ptr);
    printf("Value through pointer = %d
", *ptr);
    return 0;
}
