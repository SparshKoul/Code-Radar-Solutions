// Your code here...
#include<stdio.h>
int main(){
    int age;
    scanf("%d", &age);

    if (age>=18){
        printf(" %d is : Eligible",age);
    }else{
        printf("Not Eligible");
    }
}