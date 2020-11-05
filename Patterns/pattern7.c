/*
 * 54321
 * 5432
 * 543
 * 54
 * 5
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        for (int j=n; j>=i; j--)
            printf("%d", j);
        printf("\n");
    }
    return(0);
}
