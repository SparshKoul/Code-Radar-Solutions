#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {

    float x,y,z;
    scanf("%f%f%f", &x&y&z);

    float r;
    r = (x+y+z)\3;
    printf("Avarage: %f", r);
    return 0;
}