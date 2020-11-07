/*
 * EDCBA
 *  EDCB
 *   EDC
 *    ED
 *     E
 */
#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet (A-Z): ");
    scanf(" %c", &ch);
    if (ch >= 65 && ch <= 90) {
        int sp=0;
        for (int i=65; i<=ch; i++) {
            for (int k=1; k<=sp; k++)
                printf(" ");
            for (int j=ch; j>=i; j--)
                printf("%c", j);
            sp++;
            printf("\n");
        }
    }
    else
        printf("Invalid Input.\n");
    return(0);
}
