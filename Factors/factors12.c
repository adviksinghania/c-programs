//All the prime factors of a number
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    int x=n, i=2;
    printf("Prime factors of %d are: ", n);
    while (i <= x)
        if (n%i == 0) {
            printf("%d, ", i);
            n/=i;
        }
        else
            i++;
    return(0);
}
