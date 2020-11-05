// (1/(1*1*1))-(1/(3*3*3))+(1/(5*5*5))-(1/(7*7*7))------(1/(n*n*n))
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    float s=0;
    scanf("%d", &n);
    for (int i=1, a=1; i<=n; i+=2, a++)
        if (a%2 == 0)
            s-=(1.0/(i*i*i));
        else
            s+=(1.0/(i*i*i));
    printf("The sum is: %f\n", s);
    return(0);
}
