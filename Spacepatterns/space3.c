/*
 *     5
 *    54
 *   543
 *  5432
 * 54321
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sp=n-1;
    for (int i=n; i>=1; i--) {
        for (int k=1; k<=sp; k++)
            printf(" ");
        for (int j=n; j>=i; j--)
            printf("%d", j);
        printf("\n");
        sp--;
    }
    return(0);
}
