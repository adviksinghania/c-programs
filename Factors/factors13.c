//Co-prime numbers: HCF of 2 numbers is 1
#include <stdio.h>

int main() {
    printf("Enter two numbers:\n");
    int a, b, hcf=0;
    scanf("%d %d", &a, &b);
    for (int i=1; i<=a; i++)
        if ((a%i == 0) && (b%i == 0))
            hcf=i;
    if (hcf == 1)
        printf("Co-prime numbers.\n");
    else
        printf("Not Co-prime numbers.\n");
    return(0);
}
