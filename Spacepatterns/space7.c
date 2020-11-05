/*
 * 54321
 *  4321
 *   321
 *    21
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
        for (int j=i; j>=1; j--)
            printf("%d", j);
        printf("\n");
        sp++;
    }
    return(0);
}
