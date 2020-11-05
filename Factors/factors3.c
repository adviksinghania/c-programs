//Perfect number or not (6, 28, 496, etc.)
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n, s=0;
    scanf("%d", &n);
    for (int i=1; i<n; i++)
        if (n%i == 0)
            s+=i;
    if (s == n)
        printf("%d is a Perfect number.\n", n);
    else
        printf("%d is not a Perfect number.\n", n);
    return(0);
}
