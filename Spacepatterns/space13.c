/*
 * 55555
 *  4444
 *   333
 *    22
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
            printf("%d", i);
        printf("\n");
        sp++;
    }
    return(0);
}
