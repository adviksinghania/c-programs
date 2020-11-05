/*
 * @@@@@
 * ????
 * @@@
 * ??
 * @
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i=n; i>=1; i--) {
        for (int j=1; j<=i; j++)
            if (i%2 == 0)
                printf("?");
            else
                printf("@");
        printf("\n");
    }
    return(0);
}
