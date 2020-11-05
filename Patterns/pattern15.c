/*
 * 2
 * 24
 * 246
 * 2468
 * 246810
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i=2; i<=n; i+=2) {
        for (int j=2; j<=i; j+=2)
            printf("%d", j);
        printf("\n");
    }
    return(0);
}
