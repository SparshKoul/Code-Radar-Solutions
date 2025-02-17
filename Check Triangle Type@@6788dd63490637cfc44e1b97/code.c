// Your code here...
#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d%d", &x,&y,&z);

    if(x==y && y==z){
        printf("Eqailateral");
    }else if (x == y || x == z || y == z) {
        printf("Isosceles Triangle\n");
    } else {
        printf("Scalene ");
    }


   
}