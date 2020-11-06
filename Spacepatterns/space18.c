/*
 *     *
 *    ##
 *   ***
 *  ####
 * *****
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
            if (i%2 == 0)
                printf("#");
            else
                printf("*");
        printf("\n");
        sp--;
    }
    return(0);
}
