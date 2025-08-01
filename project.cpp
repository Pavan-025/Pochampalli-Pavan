#include <stdio.h>

int main() {
    operatar = ch ;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &ch);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (ch) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}

