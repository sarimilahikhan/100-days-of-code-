// Day 84: Check whether a word is palindrome

#include <stdio.h>
int main(void) {
    char str[100];
    int length = 0, palindrome = 1;
    printf("Enter a word: ");
    scanf("%99s", str);
    while (str[length] != '\0') length++;
    for (int i = 0; i < length / 2; i++)
        if (str[i] != str[length - 1 - i]) palindrome = 0;
    if (palindrome) printf("Palindrome
");
    else printf("Not a palindrome
");
    return 0;
}
