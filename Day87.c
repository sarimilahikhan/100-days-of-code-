// Day 87: Copy a string without strcpy

#include <stdio.h>
int main(void) {
    char source[100], copy[100];
    int i = 0;
    printf("Enter a word: ");
    scanf("%99s", source);
    while ((copy[i] = source[i]) != '\0') i++;
    printf("Copied string = %s
", copy);
    return 0;
}
