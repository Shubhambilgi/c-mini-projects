/*
 * Simple Calculator
 * -----------------
 * Takes two numbers and an operator (+, -, *, /) and prints the result.
 *
 * Concepts demonstrated:
 *  - Variables & data types (double, char)
 *  - User input with scanf()
 *  - Output with printf()
 *  - switch statement
 *  - Basic arithmetic operators
 */

#include <stdio.h>

int main(void) {
    double num1, num2, result;
    char op;

    printf("=== Simple Calculator ===\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);   // space before %c skips leftover whitespace/newline

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;

        default:
            printf("Error: Invalid operator '%c'.\n", op);
            break;
    }

    return 0;
}