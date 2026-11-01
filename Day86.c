// Day 86: Compare two words

#include <stdio.h>
int main(void) {
    char a[50], b[50];
    int i = 0, same = 1;
    printf("Enter two words: ");
    scanf("%49s %49s", a, b);
    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] != b[i]) { same = 0; break; }
        i++;
    }
    if (same) printf("Strings are equal
");
    else printf("Strings are different
");
    return 0;
}
