// Your code here...
include<stdio.h>

int main(){
    int x,y;
    scanf("%d %d", &x, &y);

    switch(x){
    case 1:{
        printf("Monday");
        break;
    }
    case 2:{
        printf("Tuesday");
        break;
    }
    case 3:{
        printf("Wednesday");
        break;
    }
    case 4:{
        printf("Thursday");
        break;
    }
    case 5:{
        printf("Friday");
        break;
    }
    case 6:{
        printf("Satday");
        break;
    }
    case 7:{
        printf("Sunday");
        break;
    }

    return 0;
    }
}
