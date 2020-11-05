// 1+(1+2)+(1+2+3)+------(1+2+3+----n)
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n, s=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        for (int j=1; j<=i; j++)
            s+=j;
    printf("The sum is: %d\n", s);
    return(0);
}
