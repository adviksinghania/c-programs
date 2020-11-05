// 2+4+6+8----n
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n,s=0;
    scanf("%d", &n);
    for (int i=2; i<=n; i+=2)
        s+=i;
    printf("The sum is: %d\n", s);
    return(0);
}
