/*
 * 18161412
 * 1086
 * 42
 * 0
 */
#include <stdio.h>

int main() {
    int c=20;
    for (int i=4; i>=1; i--) {
        for (int j=1; j<=i; j++) {
            c-=2;
            printf("%d", c);
        }
        printf("\n");
    }
    return(0);
}
