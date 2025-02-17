// Your code here...
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;


    scanf("%d", &num);

    // Prime numbers are greater than 1
    if (num <= 1) {
        printf("Not prime \n");
    } else {
        // Check divisibility from 2 to num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not prime if divisible by any number other than 1 and itself
                break;
            }
        }
        if (isPrime) {
            printf("Prime number\n");
        } else {
            printf("Not a prime number\n");
        }
    }

    return 0;
}
