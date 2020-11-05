// (2*2*2)-(4*4*4)+(6*6*6)-(8*8*8)----n
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n,s=0;
    scanf("%d", &n);
    for (int i=2; i<=n; i+=2)
        if (i%4 == 0)
            s-=(i*i*i);
        else
            s+=(i*i*i);
    printf("The sum is: %d\n", s);
    return(0);
}
