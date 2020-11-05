//Sum of Factors of a number
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n, s=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        if (n%i == 0)
            s+=i;
    printf("Sum of factors of %d is: %d\n", n, s);
    return(0);
}
