//Sum of first and last digits
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int l=n%10, f=0;
    while (n!=0) {
        f=n;
        n/=10;
    }
    int s=f+l;
    printf("The sum of first and last digit is: %d", s);
    return(0);
}
