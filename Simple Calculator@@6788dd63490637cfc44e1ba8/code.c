// Your code here...
#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    scanf("%d %d %c", &num1, &num2, &operator);

    switch (operator) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("error");
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("error\n");
            break;
    }

    return 0;
}