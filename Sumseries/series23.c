// 2+(2+4)+(2+4+6)+------(2+4+6+----n)
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n, s=0;
    scanf("%d", &n);
    for (int i=2; i<=n; i+=2)
        for (int j=2; j<=i; j+=2)
            s+=j;
    printf("The sum is: %d\n", s);
    return(0);
}
