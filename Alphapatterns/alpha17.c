/*
 * ABCDEDCBA
 * ABCD DCBA
 * ABC   CBA
 * AB     BA
 * A       A
 */
#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet (A-Z): ");
    scanf(" %c", &ch);
    if (ch >= 65 && ch <= 90) {
        int l, sp=-1;
        for (int i=ch; i>=65; i--) {
            for (int j=65; j<=i; j++)
                printf("%c", j);
            for (int k=1; k<=sp; k++)
                printf(" ");
            if (i == ch)
                l=i-1;
            else
                l=i;
            for (; l>=65; l--)
                printf("%c", l);
            sp+=2;
            printf("\n");
        }
    }
    else
        printf("Invalid Input.\n");
    return(0);
}
