/*The Perrin numbers are the numbers in the following integer sequence.
3, 0, 2, 3, 2, 5, 5, 7, 10, 12, 17, 22, 29, 39 …
In mathematical terms, the sequence p(n) of Perrin numbers is defined by the recurrence relation
P(n) = P(n-2) + P(n-3) for n > 2, with initial values P(0) = 3, P(1) = 0, P(2) = 2.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a=3, b=0, c=2;
    printf("%d, ", a);
    printf("%d, ", b);
    printf("%d, ", c);
    for (int i=4; i<=n; i++) {
        int d=a+b;
        a=b; b=c; c=d;
        printf("%d, ", d);
    }
    return(0);
}
