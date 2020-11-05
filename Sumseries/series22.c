// 1+(1+3)+(1+3+5)+------(1+3+5+----n)
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n, s=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i+=2)
        for (int j=1; j<=i; j+=2)
            s+=j;
    printf("The sum is: %d\n", s);
    return(0);
}
