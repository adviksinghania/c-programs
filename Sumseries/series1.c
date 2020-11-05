// 1+2+3+4----n
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n,s=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        s+=i;
    printf("The sum is: %d\n", s);
    return(0);
}
