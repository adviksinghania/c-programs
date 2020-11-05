//Simple Interest and Amount
#include <stdio.h>

int main() {
    float p,r,t,si,a;
    printf("Enter Prinipal Amount: ");
    scanf("%f", &p);
    printf("Enter Rate of Interest: ");
    scanf("%f", &r);
    printf("Enter Time Period: ");
    scanf("%f", &t);
    si=p*r*t/100;
    a=p+si;
    printf("\nSimple Interest: Rs.%0.2f\n", si);
    printf("Total Amount: Rs.%0.2f\n", a);
    return (0);
}
