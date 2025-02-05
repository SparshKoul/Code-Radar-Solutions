#include <stdio.h>

int main() {

    float x,y,z;
    scanf("%f%f%f", &x,&y,&z);

    float r;
    r = (x+y+z)/3;
    printf("Avarage: %.2f", r);
    return 0;
}