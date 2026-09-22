// Day 44: Simple calculator

#include <stdio.h>
int main(void) {
    double a, b;
    char op;
    printf("Enter expression (e.g. 8 + 2): ");
    scanf("%lf %c %lf", &a, &op, &b);
    if (op == '+') printf("Result = %.2f
", a + b);
    else if (op == '-') printf("Result = %.2f
", a - b);
    else if (op == '*') printf("Result = %.2f
", a * b);
    else if (op == '/' && b != 0) printf("Result = %.2f
", a / b);
    else printf("Invalid operator or division by zero
");
    return 0;
}
