// Day 83: Reverse a string

#include <stdio.h>
int main(void) {
    char str[100], temp;
    int length = 0;
    printf("Enter a word: ");
    scanf("%99s", str);
    while (str[length] != '\0') length++;
    for (int i = 0; i < length / 2; i++) {
        temp = str[i]; str[i] = str[length - 1 - i]; str[length - 1 - i] = temp;
    }
    printf("Reversed = %s
", str);
    return 0;
}
