//1+(x^2/2)-(x^4/4)+(x^6/6)-(x^8/8)----(x^n/n)
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x, s=1;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i=2; i<=n; i+=2) {
        double p=pow(x,i);
        if (i%4 == 0)
            s-=p/i;
        else
            s+=p/i;
    }
    printf("The sum is: %lf", s);
    return(0);
}
