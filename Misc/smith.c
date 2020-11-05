/*A number is smith numer or not? A Smith Number is a composite number whose
 *sum of digits is equal to the sum of digits in its prime factorization.
 */
#include <stdio.h>

int numsum(int k) {
    if (k>9) {
        int m=k;
        k=0;
        while (m!=0) {
            int b=m%10;
            k+=b;
            m/=10;
        }
    }
    return(k);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int s=0, c=0, x=n;
    for (int i=1; i<=n; i++) {
        if (n%i == 0) {
            c++;
            int p=0;
            for (int j=1; j<=i; j++)
                if (i%j == 0)
                    p++;
            if (p == 2)
                s+=numsum(i);
            if (i != 1) {
                int y=n/i;
                while (y%i == 0) {
                    s+=numsum(i);
                    y/=i;
                }
            }
        }
    }

    int d=0;
    while (n!=0) {
        int a=n%10;
        d+=a;
        n/=10;
    }

    if (c > 2 && d == s)
        printf("%d is a Smith Number.\n", x);
    else
        printf("%d is not a Smith Number.\n", x);
    return(0);
}
