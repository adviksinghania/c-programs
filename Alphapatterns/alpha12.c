/*
 *     E
 *    DE
 *   CDE
 *  BCDE
 * ABCDE
 */
#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet (A-Z): ");
    scanf(" %c", &ch);
    if (ch >= 65 && ch <= 90) {
        int sp=ch-65;
        for (int i=ch; i>=65; i--) {
            for (int k=1; k<=sp; k++)
                printf(" ");
            for (int j=i; j<=ch; j++)
                printf("%c", j);
            sp--;
            printf("\n");
        }
    }
    else
        printf("Invalid Input.\n");
    return(0);
}
