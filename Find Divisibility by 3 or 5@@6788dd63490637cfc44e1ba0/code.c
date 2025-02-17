// Your code here...
#include <stdio.h>

int main() {
    int num;

    // Taking user input
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0) {
        printf("Divisible by Both \n");
    } 
    else if(num % 3 == 0 &&num % 5 != 0){
        printf("Divisible by 3\n" );
    }else if(num % 3 != 0 &&num % 5 == 0){
        printf("Divisible by 5\n" );
    }else{
        printf("Not Divisible");
    }

    return 0;
    }

