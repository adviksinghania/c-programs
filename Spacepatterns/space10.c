/*
 * 123454321
 *  1234321
 *   12321
 *    121
 *     1
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sp=0;
    for (int i=n; i>=1; i--) {
        for (int k=1; k<=sp; k++)
            printf(" ");
        for (int j=1; j<=i; j++)
            printf("%d", j);
        for (int l=i-1; l>=1; l--)
            printf("%d", l);
        printf("\n");
        sp++;
    }
    return(0);
}
