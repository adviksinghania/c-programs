//Prime Factors of a number
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    printf("Prime Factors of %d are: ", n);
    for (int i=1; i<=n; i++)
        if (n%i == 0) {
            int c=0;
            for(int j=1; j<=i; j++)
                if(i%j == 0)
                    c++;
            if (c == 2)
                printf("%d, ", i);
        }
    return(0);
}
