#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("The sum is: %.2lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("The difference is: %.2lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("The product is: %.2lf", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: cannot divide by zero");
            } else {
                result = num1 / num2;
                printf("The quotient is: %.2lf", result);
            }
            break;
        default:
            printf("Error: invalid operator");
    }

    return 0;
}

// this is jus a simple calculator i made quick, testing C knowledge
