/*
 * 12345
 *  2345
 *   345
 *    45
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
        for (int j=i; j<=n; j++)
            printf("%d", j);
        printf("\n");
        sp++;
    }
    return(0);
}
