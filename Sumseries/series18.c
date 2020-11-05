// (1/2)+(2/3)+(3/4)+(4/5)----(n/n+1)
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    float s=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        s+=(float)i/(i+1);
    printf("The sum is: %f\n", s);
    return(0);
}
