/*
 * 1
 * 22
 * 333
 * 4444
 * 55555
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++)
            printf("%d", i);
        printf("\n");
    }
    return(0);
}
