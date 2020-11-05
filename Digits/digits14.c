//Binary to decimal Conversion
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number in binary: ");
    scanf("%d", &n);
    int p=0, s=0;
    while (n!=0) {
        int a=n%10;
        float b=pow(2, p);
        s+=(b*a);
        n/=10;
        p++;
    }
    printf("The decimal is: %d\n", s);
    return(0);
}
