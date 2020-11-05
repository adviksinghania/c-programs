// (1/2)+(3/4)+(5/6)+(7/8)----(n/n+1)
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    float s=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i+=2)
        s+=(float)i/(i+1);
    printf("The sum is: %f\n", s);
    return(0);
}
