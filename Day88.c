// Day 88: Count words in a line

#include <stdio.h>
int main(void) {
    char str[200];
    int words = 0, inside = 0;
    printf("Enter a line: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '
' && str[i] != '\t') {
            if (!inside) words++;
            inside = 1;
        } else inside = 0;
    }
    printf("Words = %d
", words);
    return 0;
}
