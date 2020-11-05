/*
 *     1
 *    12
 *   123
 *  1234
 * 12345
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
        printf("\n");
        sp--;
    }
    return(0);
}
