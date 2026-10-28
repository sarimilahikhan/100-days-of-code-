// Day 82: Count vowels in a line

#include <stdio.h>
int main(void) {
    char str[100];
    int count = 0;
    printf("Enter a line: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') count++;
    }
    printf("Vowels = %d
", count);
    return 0;
}
