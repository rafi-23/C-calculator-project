#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char operation[10];
    double num1, num2, result;

    printf("Enter an operation (+, -, *, /, sqrt, sin, cos, tan): ");
    scanf("%s", operation);

    if (strcmp(operation, "sqrt") != 0 && strcmp(operation, "sin") != 0 && strcmp(operation, "cos") != 0 && strcmp(operation, "tan") != 0) {
        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter second number: ");
        scanf("%lf", &num2);
    } else {
        printf("Enter number: ");
        scanf("%lf", &num1);
    }

    if (strcmp(operation, "+") == 0) {
        result = num1 + num2;
    } else if (strcmp(operation, "-") == 0) {
        result = num1 - num2;
    } else if (strcmp(operation, "*") == 0) {
        result = num1 * num2;
    } else if (strcmp(operation, "/") == 0) {
        result = num1 / num2;
    } else if (strcmp(operation, "sqrt") == 0) {
        result = sqrt(num1);
    } else if (strcmp(operation, "sin") == 0) {
        result = sin(num1);
    } else if (strcmp(operation, "cos") == 0) {
        result = cos(num1);
    } else if (strcmp(operation, "tan") == 0) {
        result = tan(num1);
    } else {
        printf("Invalid operation.\n");
        return 0;
    }

    printf("Result: %.2lf\n", result);

    return 0;
}
