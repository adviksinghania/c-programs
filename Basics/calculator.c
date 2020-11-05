//Sum, difference, product, and quotient of two numbers
#include <stdio.h>

int main() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("The sum is: %0.2f\n", a+b);
    printf("The difference is: %0.2f\n", a-b);
    printf("The product is: %0.2f\n", a*b);
    printf("The quotient is: %0.2f\n", a/b);
    return(0);
}
