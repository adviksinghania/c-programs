/*
 * 1
 * 23
 * 456
 * 78910
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int c=0;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            c++;
            printf("%4d", c);
        }
        printf("\n");
    }
    return(0);
}
