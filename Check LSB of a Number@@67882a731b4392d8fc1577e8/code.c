// Your code here...
//If LSB = 1, the number is odd.
//If LSB = 0, the number is even.
#include<stdio.h>
int main(){

    int x;
    scanf("%d", &x);

    if(x%2==0){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}