/*
 * 54321
 *  5432
 *   543
 *    54
 *     5
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sp=0;
    for (int i=1; i<=n; i++) {
        for (int k=1; k<=sp; k++)
            printf(" ");
        for (int j=n; j>=i; j--)
            printf("%d", j);
        printf("\n");
        sp++;
    }
    return(0);
}
