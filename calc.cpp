#include <stdio.h>

void calc(double num1, double num2, char op) {
    switch (op) {
        case '+':
            printf("%lf", num1 + num2);
            break;
        case '-':
            printf("%lf", num1 - num2);
            break;
        case '*':
            printf("%lf", num1 * num2);
            break;
        case '/':
            printf("%lf", num1 / num2);
            break;
        default:
            printf("ERROR! Invalid Operator");
            break;
    }
}

int main() {
    printf("Welcome to my dumb calculator\n");

    double num1 = 0;
    printf("Please enter the first number: ");
    scanf("%lf", &num1);

    double num2 = 0;
    printf("Please enter the second number: ");
    scanf("%lf", &num2);

    char op;
    printf("Please enter the operator: ");
    scanf(" %c", &op);

    calc(num1, num2, op);
    return 0;
}
