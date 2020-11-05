//Sum of Digits of a number
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int s=0;
    while (n!=0) {
        int a=n%10;
        s+=a;
        n/=10;
    }
    printf("The sum is: %d", s);
    return(0);
}
