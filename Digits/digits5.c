//Number is Palindrome or not
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int r=0, x=n;
    while (n!=0) {
        int a=n%10;
        r=r*10+a;
        n/=10;
    }
    if (x == r)
        printf("%d is a Palindrome Number.\n", x);
    else
        printf("%d is not a Palindrome Number.\n", x);
    return(0);
}
