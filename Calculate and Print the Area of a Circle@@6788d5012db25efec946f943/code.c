#include <stdio.h>
#define PI 3.141592  // Defining Pi as a constant



int main() {
    float x;
    scanf("%f", &x);
    float r;
    r= (PI*x*x);
    printf("Area: %.2f",r );
    return 0;
}