// 1,2,4,7,11,16,......., n terms
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    for (int i=1, a=1; i<=n; i++) {
        printf("%d, ", a);
        a+=i;
    }
    return(0);
}
