//Sum of even and odd Factors of a number
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n, od=0, ev=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        if (n%i == 0) {
            if (i%2 == 0)
                ev+=i;
            else
                od+=i;
        }
    printf("Sum of odd factors of %d is: %d\n", n, od);
    printf("Sum of even factors of %d is: %d\n", n, ev);
    return(0);
}
