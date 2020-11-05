// (1*1*1)+(3*3*3)+(5*5*5)+(7*7*7)----n
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n,s=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i+=2)
        s+=(i*i*i);
    printf("The sum is: %d\n", s);
    return(0);
}
