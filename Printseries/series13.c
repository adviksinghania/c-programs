// 1,11,111,1111,......., n terms
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    for (int i=1, a=0; i<=n; i++) {
        a=(a*10)+1;
        printf("%d, ", a);
    }
    return(0);
}
