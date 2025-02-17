// Your code here...#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter two integers followed by an operator (+, -, *, /): ");
    scanf("%d %d %c", &num1, &num2, &operator);

    switch (operator) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("Error: Invalid operator. Please use +, -, *, or /.\n");
            break;
    }

    return 0;
}