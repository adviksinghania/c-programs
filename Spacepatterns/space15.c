/*
 * 9876
 *  543
 *   21
 *    0
 */
#include <stdio.h>

int main() {
    int sp=0, c=10;
    for (int i=4; i>=1; i--) {
        for (int k=1; k<=sp; k++)
            printf(" ");
        for (int j=1; j<=i; j++) {
            c--;
            printf("%d", c);
        }
        printf("\n");
        sp++;
    }
    return(0);
}
