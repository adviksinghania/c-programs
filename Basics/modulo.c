//Remainder of two numbers (Modulo Operator)
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The remainder of %d/%d is: %d\n", a, b, a%b);
    return(0);
}
