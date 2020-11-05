/*
 *     1
 *    121
 *   12321
 *  1234321
 * 123454321
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sp=n-1;
    for (int i=1; i<=n; i++) {
        for (int k=1; k<=sp; k++)
            printf(" ");
        for (int j=1; j<=i; j++)
            printf("%d", j);
        for (int l=i-1; l>=1; l--)
            printf("%d", l);
        printf("\n");
        sp--;
    }
    return(0);
}
