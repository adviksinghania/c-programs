/*
 * A       A
 * AB     BA
 * ABC   BCA
 * ABCD DCBA
 * ABCDEDCBA
 */
#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet (A-Z): ");
    scanf(" %c", &ch);
    if (ch >= 65 && ch <= 90) {
        int l, sp=2*(ch-65)-1;
        for (int i=65; i<=ch; i++) {
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
            sp-=2;
            printf("\n");
        }
    }
    else
        printf("Invalid Input.\n");
    return(0);
}
