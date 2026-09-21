// Day 43: Vowel or consonant

#include <stdio.h>
int main(void) {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel
");
    else printf("Consonant (or not an alphabet)
");
    return 0;
}
