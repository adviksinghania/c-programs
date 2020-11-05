//Print all perfect numbers between two numbers
#include <stdio.h>

int main() {
    printf("Enter two numbers:\n");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Perfect numbers :\n");
    if (a > b) {
        for (int n=b; n<=a; n++) {
            int s=0;
            for (int i=1; i<n; i++)
                if (n%i == 0)
                    s+=i;
            if (n == s)
                printf("%d, ", n);
        }
    } else if (a < b) {
        for (int n=a; n<=b; n++) {
            int s=0;
            for (int i=1; i<n; i++)
                if (n%i == 0)
                    s+=i;
            if (n == s)
                printf("%d, ", n);
        }
    } else
        printf("None\n");
    return(0);
}
