// Calculating the roots of a quadratic equation
#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c;
    printf("Enter the coefficient of x%c: ", 253); // 253 is ASCII value of superscript 2
    scanf("%f", &a);
    printf("Enter the coefficient of x: ");
    scanf("%f", &b);
    printf("Enter the constant term: ");
    scanf("%f", &c);
    float d = b*b-4*a*c;
    if (d>0) {
        float x1 = (b+sqrt(d))/2*a;
        float x2 = (b-sqrt(d))/2*a;
        printf("\nFirst root: %0.2f\n", x1);
        printf("Second root: %0.2f\n", x2);
        printf("Roots are real and unequal.\n");
    } else if (d==0) {
        float x = b/2*a;
        printf("\nRoots are: %0.2f, %0.2f\n", x, x);
        printf("Roots are real and equal.\n");
    } else
        printf("\nRoots are not real.\n");
    return(0);
}
