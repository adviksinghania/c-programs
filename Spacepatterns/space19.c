/*
 * 1       1
 * 12     21
 * 123   321
 * 1234 4321
 * 123454321
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int l, sp=2*n-3;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++)
            printf("%d", j);
        for (int k=1; k<=sp; k++)
            printf(" ");
        if (i == n)
            l=i-1;
        else
            l=i;
        for (; l>=1; l--)
            printf("%d", l);
        printf("\n");
        sp-=2;
    }
    return(0);
}
