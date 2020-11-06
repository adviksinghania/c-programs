/*
 * 123454321
 * 1234 4321
 * 123   321
 * 12     21
 * 1       1
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sp=-1, l;
    for (int i=n; i>=1; i--) {
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
        sp+=2;
    }
    return(0);
}
