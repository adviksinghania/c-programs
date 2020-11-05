// Swap using a thrid variable
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    c=a; a=b; b=c;
    printf("\nSwapped first number: %d\n", a);
    printf("Swapped second number: %d\n", b);
    return(0);
}
