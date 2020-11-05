//HCF of 2 numbers
#include <stdio.h>

int main() {
    printf("Enter two numbers:\n");
    int a, b, hcf=0;
    scanf("%d %d", &a, &b);
    for (int i=1; i<=a; i++)
        if ((a%i == 0) && (b%i == 0))
            hcf=i;
    printf("HCF of %d and %d is: %d\n", a, b, hcf);
    return(0);
}
