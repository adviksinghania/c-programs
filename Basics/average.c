// Average of five numbers
#include <stdio.h>

int main() {
    printf("Enter five numbers:\n");
    float a,b,c,d,e;
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    printf("The Average is: %0.2f\n", (a+b+c+d+e)/5);
    return(0);
}
