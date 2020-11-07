/*
 *       A
 *     A   A
 *   A   A   A
 * A   A   A   A
 *   A   A   A
 *     A   A
 *       A
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sp=++n-1;
    for (int i=1; i<=n; i++) {
        for (int k=1; k<=sp; k++)
            printf("  ");
        for (int j=1; j<=i; j++)
            if (j%2 == 0)
                printf("A ");
            else
                printf("  ");
        for (int l=i-1; l>=1; l--)
            if (l%2 == 0)
                printf("A ");
            else
                printf("  ");
        sp--;
        printf("\n");
    }
    sp+=2;
    for (int i=n-1; i>=1; i--) {
        for (int k=1; k<=sp; k++)
            printf("  ");
        for (int j=1; j<=i; j++)
            if (j%2 == 0)
                printf("A ");
            else
                printf("  ");
        for (int l=i-1; l>=1; l--)
            if (l%2 == 0)
                printf("A ");
            else
                printf("  ");
        sp++;
        printf("\n");
    }
    return(0);
}
