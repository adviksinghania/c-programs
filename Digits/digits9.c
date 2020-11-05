//Sum of Prime digits of a number
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int s=0;
    while (n!=0) {
        int c=0, a=n%10;
        for (int i=1; i<=a; i++)
            if (a%i == 0)
                c++;
        if (c == 2)
            s+=a;
        n/=10;
    }
    printf("The sum of prime digits is: %d\n", s);
    return(0);
}
