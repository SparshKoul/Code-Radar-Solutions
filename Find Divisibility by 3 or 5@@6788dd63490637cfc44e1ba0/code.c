// Your code here...
#include <stdio.h>

int main() {
    int num;

    // Taking user input
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is Divisible by both 3 and 5.\n", num);
    } else {
        printf("%d is not Divisible by both 3 and 5.\n", num);
    }

    return 0;
}
