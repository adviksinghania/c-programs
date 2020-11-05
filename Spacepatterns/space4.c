/*
 *     5
 *    45
 *   345
 *  2345
 * 12345
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
        for (int j=i; j<=n; j++)
            printf("%d", j);
        printf("\n");
        sp--;
    }
    return(0);
}
