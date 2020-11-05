//Decimal to Binary Conversion
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int p=0, s=0;
    while (n!=0) {
        int a=n%2;
        float b=pow(10, p);
        s+=(b*a);
        n/=2;
        p++;
    }
    printf("The binary is: %d\n", s);
    return(0);
}
