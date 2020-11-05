//1-(x^5/5)+(x^9/9)-(x^13/13)----(x^n/n)
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x, s=1;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i=5, a=1; i<=n; i+=4, a++) {
        double p=pow(x,i);
        if (a%2 == 0)
            s+=p/i;
        else
            s-=p/i;
    }
    printf("The sum is: %lf", s);
    return(0);
}
