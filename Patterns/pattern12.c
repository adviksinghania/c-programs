/*
 * 9876
 * 543
 * 21
 * 0
 */
#include <stdio.h>

int main() {
    int c=10;
    for (int i=4; i>=1; i--) {
        for (int j=1; j<=i; j++) {
            c--;
            printf("%d", c);
        }
        printf("\n");
    }
    return(0);
}
