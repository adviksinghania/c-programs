//A number is Armstrong or not: Sum of cubes of digits of a number is equal to the number
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int s=0, x=n;
    while (n!=0) {
        int a=n%10;
        s+=(a*a*a);
        n/=10;
    }
    if (x == s)
        printf("%d is an Armstrong Number.\n", x);
    else
        printf("%d is not an Armstrong Number.\n", x);
    return(0);
}
