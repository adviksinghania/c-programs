//Print the Table of a number
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n, a;
    scanf("%d", &n);
    printf("Enter the length of the table: ");
    scanf("%d", &a);
    for (int i=1; i<=a; i++)
        printf("%d X %d = %d\n", n, i, n*i);
    return(0);
}
