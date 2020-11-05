// Smallest of 3 numbers
#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a<b && a<c)
        printf("%d is smallest.\n", a);
    else if (b<c)
        printf("%d is smallest.\n", b);
    else
        printf("%d is smallest.\n", c);
    return(0);
}
