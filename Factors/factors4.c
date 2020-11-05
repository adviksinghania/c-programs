//Count the Factors of a number
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n,c=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        if (n%i == 0)
            c++;
    printf("Number of factors of %d is: %d\n", n, c);
    return(0);
}
