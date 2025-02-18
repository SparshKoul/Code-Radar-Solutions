// Your code here...
//If MSB = 0, the number is positive (or zero).
//If MSB = 1, the number is negative.

#include<stdio.h>
int main(){

    long x;
    scanf("%ld", &x);

    if(x>=0){
        printf("Not Set");
    }else{
        printf("Set");
    }
    return 0;
}