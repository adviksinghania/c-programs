//(x/1)-(x^3/3)+(x^5/5)-(x^7/7)----(x^n/n)
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x, s=0;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i=1, a=1; i<=n; i+=2, a++) {
        double p=pow(x,i);
        if (a%2 == 0)
            s-=p/i;
        else
            s+=p/i;
    }
    printf("The sum is: %lf", s);
    return(0);
}
