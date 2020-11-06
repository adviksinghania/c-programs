/*
 * 10101
 *  0101
 *   101
 *    01
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
            if ((i+j)%2 == 0)
                printf("1");
            else
                printf("0");
        printf("\n");
        sp++;
    }
    return(0);
}
