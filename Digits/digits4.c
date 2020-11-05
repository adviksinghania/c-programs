//Reverse of digits of a number
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int r=0;
    while (n!=0) {
        int a=n%10;
        r=r*10+a;
        n/=10;
    }
    printf("The reverse of the number is: %d\n", r);
    return(0);
}
