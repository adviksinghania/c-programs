/*
 *     A
 *    ABA
 *   ABCBA
 *  ABCDCBA
 * ABCDEDCBA
 */
#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet (A-Z): ");
    scanf(" %c", &ch);
    if (ch >= 65 && ch <= 90) {
        int sp=ch-65;
        for (int i=65; i<=ch; i++) {
            for (int k=1; k<=sp; k++)
                printf(" ");
            for (int j=65; j<=i; j++)
                printf("%c", j);
            for (int l=i-1; l>=65; l--)
                printf("%c", l);
            sp--;
            printf("\n");
        }
    }
    else
        printf("Invalid Input.\n");
    return(0);
}
