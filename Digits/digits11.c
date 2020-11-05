//Sum of digits except first and last digit
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int l=n%10, f=0, s=0;
    while (n!=0) {
        f=n;
        int a=n%10;
        s+=a;
        n/=10;
    }
    s-=(f+l);
    printf("The sum except first and last digit is: %d", s);
    return(0);
}
