//Finding the square root of number using loops
#include <stdio.h>
#include <math.h>

int main() {
    float a, eps=0.000001;
    printf("Enter a number: ");
    scanf("%f", &a);
    float x=a, y=(x+a/x)/2.0;
    while(fabs(y-x) > eps) {
        x=y;
        y=(x+a/x)/2.0;
    }
    printf("Square root of %f is: %f\n", a, y);
    return(0);
}
