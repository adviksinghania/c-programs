//Print all prime numbers between two numbers
#include <stdio.h>

int main() {
    printf("Enter two numbers:\n");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Prime numbers :\n");
    if (a > b) {
        for (int n=b; n<=a; n++) {
            int c=0;
            for (int i=1; i<=n; i++)
                if (n%i == 0)
                    c++;
            if (c == 2)
                printf("%d, ", n);
        }
    } else if (a < b) {
        for (int n=a; n<=b; n++) {
            int c=0;
            for (int i=1; i<=n; i++)
                if (n%i == 0)
                    c++;
            if (c == 2)
                printf("%d, ", n);
        }
    } else
        printf("None\n");
    return(0);
}
