// (1/1)+(1/2)+(1/3)+(1/4)----(1/n)
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    float s=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        s+=(1.0/i);
    printf("The sum is: %f\n", s);
    return(0);
}
