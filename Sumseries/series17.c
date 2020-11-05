// (1/(2*2))-(1/(4*4))+(1/(6*6))-(1/(8*8))------(1/(n*n))
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    float s=0;
    scanf("%d", &n);
    for (int i=2; i<=n; i+=2)
        if (i%4 == 0)
            s-=(1.0/(i*i));
        else
            s+=(1.0/(i*i));
    printf("The sum is: %f\n", s);
    return(0);
}
