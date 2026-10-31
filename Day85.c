// Day 85: Count spaces in a line

#include <stdio.h>
int main(void) {
    char str[150];
    int spaces = 0;
    printf("Enter a line: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ') spaces++;
    printf("Spaces = %d
", spaces);
    return 0;
}
