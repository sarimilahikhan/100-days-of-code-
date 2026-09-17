// Day 39: Positive, negative or zero

#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0) printf("Positive
");
    else if (n < 0) printf("Negative
");
    else printf("Zero
");
    return 0;
}
