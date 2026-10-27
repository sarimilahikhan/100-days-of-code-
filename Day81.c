// Day 81: String length without strlen

#include <stdio.h>
int main(void) {
    char str[100];
    int length = 0;
    printf("Enter a word: ");
    scanf("%99s", str);
    while (str[length] != '\0') length++;
    printf("Length = %d
", length);
    return 0;
}
